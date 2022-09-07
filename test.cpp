#include "Verilator.h"
#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>

#include <stdio.h>

Verilator *top = NULL;
vluint64_t main_time = 0;
int clkcount = 0;

double sc_time_stamp () {
    return main_time;
}

int main(int argc, char** argv, char** env){
    top = new Verilator;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->clock = 0;
    top->a = 0;
    top->b = 0;

    printf("time clock a b valid_out\r\n");


while (!Verilated::gotFinish()){
    //clock iterates every main_time rotation
    top->clock = main_time % 2;
    //every 4 main_time rotations, clkcount iterates
    if ((main_time %8)==0){
        printf("test loop #%d\r\n",clkcount+1);
        clkcount++;
    }
    //every 2 main_time rotations, a iterates
    if (((main_time+clkcount+1)/2)%2==1){
         top->a = 0;
    }
    else {
         top->a = 1;
    }
    //every 4 main_time rotations, b iterates
    if ((((main_time+clkcount+3)/4) %2)==0){
        top->b = 1;
    }
    else {
        top->b =0;
    }

    
    top->eval();
    m_trace->dump(main_time);

    printf("%5ld %d %3d %3d %d\r\n",main_time,top->clock,top->a,top->b,top->y);

    if (main_time >= 47){
        break;
    }
        main_time++;
}
    m_trace->close();
    delete top;
    exit(0);
}