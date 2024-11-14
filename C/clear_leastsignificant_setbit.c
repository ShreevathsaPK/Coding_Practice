//Clear Least Significant Bit (LSB): Write a function to clear the least significant set bit in an integer.

#include <stdio.h>
#include <stdint.h>

int main(){

    uint32_t num = 0b101100;
    
    printf("After clearing LSB: 0x%08X --- \n", num & (num - 1));

    return 0;
}
