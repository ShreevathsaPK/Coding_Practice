//Reverse Bits: Write a function to reverse the bits of a 32-bit integer.

#include <stdio.h>
#include <stdint.h>

uint32_t shiftbits(uint32_t num){
    uint32_t res = 0;
    for(int i=0;i<32;i++){
        printf("0x%08x",res);
        res = res << 1;
        res = res | (num&1);
        num = num >> 1;
    }
    return res;
}

int main(){

    uint32_t num = 0x00FF0000;
    uint32_t res = shiftbits(num);
    printf("0x%08x",res);

    return 0;
}