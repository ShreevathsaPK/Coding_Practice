//Clear All Bits except the MSB: Write a function to clear all bits except the most significant bit in a 32-bit integer.

//NO SHORTCUT LOGIC JUSt tHE MUNDANE LONG WAY SOLUTION.
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(){

    uint32_t num = 0x00ff00aa;
    uint32_t mrmask = 0xffffffff;
    while((num&(num-1))!=0){
        mrmask = mrmask << 1;
        num = num & mrmask;
    }
    printf("0x%08x",num);


    return 0;
}