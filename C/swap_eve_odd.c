//Swap Even and Odd Bits: Write a function to swap even and odd bits in a 32-bit integer.
#include <stdio.h>
#include <stdint.h>


int main(){
    uint32_t num = 0xAAAAAAA;
    uint32_t mask_even = 0xAAAAAAAA;
    uint32_t mask_odd = 0x55555555;

    printf("0x%08x",(((num&mask_even)>>1) | ((num&mask_odd)<<1)));

    return 0;
}