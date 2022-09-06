#include "Verilator.h"
#include "verilated.h"

#include <stdio.h>

Verilator *top = NULL;
vluint64_t main_time = 0;

double sc_time_stamp () {
    return main_time;
}

int main(int argc, char** argv, char** env){
    top = new Verilator;

    top->clock = 0;
    top->a = 0;
    top->b = 0;

    printf("time clock a b valid_out\r\n");


while (!Verilated::gotFinish()){
    top->clock = main_time % 2;
    top->b = main_time % 2;
    if ((main_time /2)%2){
        top->a = 0;
    }
    else {
        top->a = 1;
    }
    top->eval();

    printf("%5ld %d %3d %3d %d\r\n",main_time,top->clock,top->a,top->b,top->y);

    if (main_time >= 24){
        break;
    }
        main_time++;
}
    delete top;
    exit(0);
}