#include "xparameters.h"
#include "xtmrctr.h"
#include "xil_printf.h"
#include "xil_types.h"
#include "xil_io.h"  // Required for Xil_In32/Out32

/* --------------------------------------------------------------------------
 * Hardware Definitions & Address Map
 * -------------------------------------------------------------------------- */
// Robust Timer Base Address Detection
#ifdef XPAR_XTMRCTR_0_BASEADDR
#define TIMER_BASE XPAR_XTMRCTR_0_BASEADDR
#else
#define TIMER_BASE XPAR_TMRCTR_0_BASEADDR
#endif

#define TIMER_ID 0

// Your Specific Tiered Memory Addresses (Matches your Address Editor)
#define FAST_TIER_BASE    0xC0000000 
#define SLOW_TIER_BASE    0xC0010000 

XTmrCtr TimerInstance;

/* --------------------------------------------------------------------------
 * Helper Functions
 * -------------------------------------------------------------------------- */
// Helper function to get time
u32 get_ticks() {
    return XTmrCtr_GetValue(&TimerInstance, TIMER_ID);
}

void run_nop_test(u32 iterations) {
    u32 start, end;
    xil_printf("Running %u NOP iterations...", iterations);
    
    start = get_ticks();
    for(volatile u32 i = 0; i < iterations; i++) {
        asm("nop");
    }
    end = get_ticks();
    
    xil_printf(" Done. Total: %u cycles\r\n", end - start);
}

/* * targeted_latency_test:
 * Measures the read latency of a specific memory address.
 * Reads 'iterations' times and calculates the average.
 */
void targeted_latency_test(u32 address, u32 iterations, char* name) {
    u32 start, end, total_diff = 0;
    volatile u32 val;

    xil_printf("Testing %s at 0x%08X...\r\n", name, address);

    // 1. Warm-up Write (Ensure memory is initialized/reachable)
    Xil_Out32(address, 0xDEADBEEF);

    // 2. Measurement Loop
    for(u32 i = 0; i < iterations; i++) {
        start = get_ticks();
        
        // Force a single 32-bit read from the target tier
        val = Xil_In32(address);
        
        end = get_ticks();
        total_diff += (end - start);
    }

    // 3. Calculation
    u32 avg = total_diff / iterations;
    
    // We assume ~63 cycles overhead based on your previous data
    u32 adjusted = (avg > 63) ? (avg - 63) : 0; 

    xil_printf("  -> Raw Average: %u cycles\r\n", avg);
    xil_printf("  -> Adjusted Latency (est): %u cycles\r\n", adjusted);
}

/* --------------------------------------------------------------------------
 * Main Application
 * -------------------------------------------------------------------------- */
int main() {
    // 1. Setup
    int Status;
    Status = XTmrCtr_Initialize(&TimerInstance, TIMER_BASE);
    if (Status != XST_SUCCESS) {
        xil_printf("Timer Init Failed\r\n");
        return XST_FAILURE;
    }

    XTmrCtr_SetOptions(&TimerInstance, TIMER_ID, XTC_AUTO_RELOAD_OPTION);
    XTmrCtr_Start(&TimerInstance, TIMER_ID);

    xil_printf("\r\n=== Tiered Memory Performance Suite ===\r\n");

    /* TEST 1: Sanity Check (Baseline NOPs) */
    // Ensures the CPU and Timer are behaving exactly as before (expect ~13M-14M)
    run_nop_test(1000000);

    /* TEST 2: Timer Overhead Calculation */
    // Establish the "Cost of Doing Business" for this run
    u32 s = get_ticks();
    u32 e = get_ticks();
    u32 overhead = e - s;
    xil_printf("Timer Call Overhead: %u cycles\r\n", overhead);
    xil_printf("---------------------------------------\r\n");

    /* TEST 3: The Fast Tier (Native AXI BRAM) */
    // Expect: Standard AXI latency (approx 20-30 cycles adjusted)
    targeted_latency_test(FAST_TIER_BASE, 1000, "FAST TIER (Local)");

    /* TEST 4: The Slow Tier (Latency Injector) */
    // Expect: Fast Tier + Your Verilog C_LATENCY_CYCLES
    targeted_latency_test(SLOW_TIER_BASE, 1000, "SLOW TIER (Far)");

    xil_printf("=== Tests Complete ===\r\n");

    return 0;
}