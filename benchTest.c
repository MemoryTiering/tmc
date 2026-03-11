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

#define FAST_TIER_BASE 0xC0000000

#define TOTAL_WORKLOAD_BYTES 64000 
#define NUM_ARRAYS 3

#define ARRAY_BYTES (TOTAL_WORKLOAD_BYTES / NUM_ARRAYS)
#define ARRAY_SIZE  (ARRAY_BYTES / sizeof(u32))
#define NTIMES 10

XTmrCtr TimerInstance;

static inline u32 get_ticks()
{
    return XTmrCtr_GetValue(&TimerInstance, TIMER_ID);
}

void stream_copy(volatile u32 *a, volatile u32 *b)
{
    volatile u32 *pa = a;
    volatile u32 *pb = b;

    for(u32 i = 0; i < ARRAY_SIZE; i++)
        *pa++ = *pb++;
}

void stream_scale(volatile u32 *a, volatile u32 *b, u32 scalar)
{
    volatile u32 *pa = a;
    volatile u32 *pb = b;

    for(u32 i = 0; i < ARRAY_SIZE; i++)
        *pa++ = scalar * (*pb++);
}

void stream_add(volatile u32 *a, volatile u32 *b, volatile u32 *c)
{
    volatile u32 *pa = a;
    volatile u32 *pb = b;
    volatile u32 *pc = c;

    for(u32 i = 0; i < ARRAY_SIZE; i++)
        *pa++ = (*pb++) + (*pc++);
}

void stream_triad(volatile u32 *a, volatile u32 *b, volatile u32 *c, u32 scalar)
{
    volatile u32 *pa = a;
    volatile u32 *pb = b;
    volatile u32 *pc = c;

    for(u32 i = 0; i < ARRAY_SIZE; i++)
        *pa++ = (*pb++) + scalar * (*pc++);
}

void run_stream_test(u32 base, char *name)
{
    volatile u32 *A = (volatile u32*)base;
    volatile u32 *B = A + ARRAY_SIZE;
    volatile u32 *C = B + ARRAY_SIZE;
    
    xil_printf("A: %08x\r\n", (u32)A);
    xil_printf("B: %08x\r\n", (u32)B);
    xil_printf("C: %08x\r\n", (u32)C);

    u32 start,end;
    u32 best;

    xil_printf("\r\n=== STREAM Benchmark : %s ===\r\n",name);
    xil_printf("Array elements: %u\r\n",ARRAY_SIZE);
    xil_printf("Total working set: %u bytes\r\n",TOTAL_WORKLOAD_BYTES);

    volatile u32 *pa = A;
    volatile u32 *pb = B;
    volatile u32 *pc = C;

    for(u32 i=0;i<ARRAY_SIZE;i++)
    {
        *pa++ = 1;
        *pb++ = 2;
        *pc++ = 0;
    }

    best = 0xFFFFFFFF;

    for(u32 k=0;k<NTIMES;k++)
    {
        start = get_ticks();
        stream_copy(A,B);
        end   = get_ticks();

        if((end-start) < best)
            best = end-start;
    }

    xil_printf("COPY cycles: %u\r\n",best);

    best = 0xFFFFFFFF;

    for(u32 k=0;k<NTIMES;k++)
    {
        start = get_ticks();
        stream_scale(A,B,3);
        end   = get_ticks();

        if((end-start) < best)
            best = end-start;
    }

    xil_printf("SCALE cycles: %u\r\n",best);

    best = 0xFFFFFFFF;

    for(u32 k=0;k<NTIMES;k++)
    {
        start = get_ticks();
        stream_add(A,B,C);
        end   = get_ticks();

        if((end-start) < best)
            best = end-start;
    }

    xil_printf("ADD cycles: %u\r\n",best);

    best = 0xFFFFFFFF;

    for(u32 k=0;k<NTIMES;k++)
    {
        start = get_ticks();
        stream_triad(A,B,C,3);
        end   = get_ticks();

        if((end-start) < best)
            best = end-start;
    }

    xil_printf("TRIAD cycles: %u\r\n",best);
}

void axi_burst_test(u32 base,char *name)
{
    volatile u32 *ptr = (volatile u32*)base;
    volatile u32 *p = ptr;
    volatile u32 val;
    u32 start,end;

    xil_printf("\r\n=== AXI Burst Throughput : %s ===\r\n",name);

    start = get_ticks();

    for(u32 i=0;i<ARRAY_SIZE;i++)
    {
        *p = 1;
        p++;
    }

    end = get_ticks();

    xil_printf("Sequential access cycles: %u\r\n", end-start);
}

int main()
{
    int Status;

    Status = XTmrCtr_Initialize(&TimerInstance, TIMER_BASE);

    if(Status != XST_SUCCESS)
    {
        xil_printf("Timer init failed\r\n");
        return -1;
    }

    XTmrCtr_SetOptions(&TimerInstance,TIMER_ID,XTC_AUTO_RELOAD_OPTION);
    XTmrCtr_Start(&TimerInstance,TIMER_ID);

    xil_printf("\r\n==============================\r\n");
    xil_printf(" AXI STREAM + LATENCY BENCH\r\n");
    xil_printf("==============================\r\n");

    axi_burst_test(FAST_TIER_BASE,"BOTH TIERS");
    run_stream_test(FAST_TIER_BASE,"BOTH TIERS");

    xil_printf("\r\n=== Benchmark Complete ===\r\n");

    return 0;
}