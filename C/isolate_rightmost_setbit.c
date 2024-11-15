//Isolate Rightmost Set Bit: Write a function to isolate the rightmost set bit of a 32-bit integer.
#include <stdint.h>
#include <stdio.h>

int main(){
    uint32_t num = 0X8;
    printf("0X%08X",num & -num);
    return 0;
}