//Bit Masking: Write a function to extract a specific range of bits from an integer.

#include <stdio.h>
#include <stdint.h>

int main(){

    uint32_t num=0xffffffff;
    int start = 3;
    int end = 5;
    
    uint32_t mask = ((1<<(end+1))-1) ^ ((1<<(start))-1);
    //or alternately.
    //uint32_t mask = ((1 << (end - start + 1)) - 1) << start; 
    printf("0x%08x",num & mask);

    return 0;
}