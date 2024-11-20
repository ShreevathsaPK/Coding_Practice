//Byte Swap: Write a function that swaps the bytes in a 32-bit integer (e.g., convert 0x12345678 to 0x78563412).
#include <stdio.h>
#include <stdint.h>



int main(){
    uint32_t num = 0x12345678;
    uint32_t mask = 0x000000FF;
    printf("0x%08x",((num & mask)<<24)|((num & (mask<<8))<<8) | ((num & (mask<<16))>>8) | ((num & (mask<<24))>>24));
    return 0;
}