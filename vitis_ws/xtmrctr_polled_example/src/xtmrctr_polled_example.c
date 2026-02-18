#include "xparameters.h"
#include "xtmrctr.h"
#include "xil_printf.h"

// Hardware identification
#ifndef SDT
#define TMR_BASE XPAR_TMRCTR_0_DEVICE_ID
#else
#define TMR_BASE XPAR_XTMRCTR_0_BASEADDR
#endif

#define TIMER_0 0
XTmrCtr TimerInst;

int main() {
    u32 tStart, tEnd;

    // 1. Initialize the driver
#ifndef SDT
    XTmrCtr_Initialize(&TimerInst, TMR_BASE);
#else
    XTmrCtr_Initialize(&TimerInst, TMR_BASE);
#endif

    // 2. Clear state and Start
    XTmrCtr_SetOptions(&TimerInst, TIMER_0, XTC_AUTO_RELOAD_OPTION);
    XTmrCtr_Start(&TimerInst, TIMER_0);

    xil_printf("--- Custom Project Performance Test ---\r\n");

    // 3. Measure Workload
    tStart = XTmrCtr_GetValue(&TimerInst, TIMER_0);

    for(volatile int i = 0; i < 1000000; i++) {
        asm("nop");
    }

    tEnd = XTmrCtr_GetValue(&TimerInst, TIMER_0);

    // 4. Report
    u32 diff = tEnd - tStart;
    xil_printf("Total Cycles: %u\r\n", diff);
    
    // Nexys-A7 100MHz math: cycles / 100,000 = ms
    xil_printf("Execution Time: %u.%03u ms\r\n", diff/100000, (diff%100000)/100);

    return 0;
}