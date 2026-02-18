#include "xparameters.h"
#include "xtmrctr.h"
#include "xil_printf.h"
#include "xil_types.h"

#ifdef XPAR_XTMRCTR_0_BASEADDR
#define TIMER_BASE XPAR_XTMRCTR_0_BASEADDR
#else
#define TIMER_BASE XPAR_TMRCTR_0_BASEADDR
#endif

#define TIMER_ID 0
XTmrCtr TimerInstance;

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
    
    xil_printf(" Done. Cycles: %u\r\n", end - start);
}

void run_memory_write_test(u32 iterations) {
    u32 start, end;
    volatile u32 dummy_mem[100]; // Local stack memory
    xil_printf("Running %u Local Memory Writes...", iterations);
    
    start = get_ticks();
    for(volatile u32 i = 0; i < iterations; i++) {
        dummy_mem[i % 100] = i; 
    }
    end = get_ticks();
    
    xil_printf(" Done. Cycles: %u\r\n", end - start);
}

int main() {
    // 1. Setup
    XTmrCtr_Initialize(&TimerInstance, TIMER_BASE);
    XTmrCtr_SetOptions(&TimerInstance, TIMER_ID, XTC_AUTO_RELOAD_OPTION);
    XTmrCtr_Start(&TimerInstance, TIMER_ID);

    xil_printf("\r\n--- Multi-Stage Performance Suite ---\r\n");

    /* TEST 1: The Baseline (Verify our 13M result) */
    run_nop_test(1000000);

    /* TEST 2: High Volume (Double the workload) */
    // If linear, this should be exactly 26,000,114
    run_nop_test(2000000);

    /* TEST 3: Memory Access (Stack/BRAM speed) */
    // This shows how much slower writes are compared to NOPs
    run_memory_write_test(1000000);

    /* TEST 4: The "Overhead" Test */
    // Measuring how long it takes just to call the timer functions
    u32 s = get_ticks();
    u32 e = get_ticks();
    xil_printf("Timer Call Overhead: %u cycles\r\n", e - s);

    xil_printf("--- Tests Complete ---\r\n");

    return 0;
}