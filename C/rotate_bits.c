//Rotate Bits Left/Right: Write functions to rotate a 32-bit integer’s bits to the left or right by a specified number of positions.

#include <stdio.h>
#include <stdint.h>

uint32_t shiftbits_right(uint32_t num,int shiftvalue){
        return num<<shiftvalue | num >> (32-shiftvalue);
}

uint32_t shiftbits_left(uint32_t num,int shiftvalue){
        return num>>shiftvalue | num << (32-shiftvalue);
}



int main(){

    uint32_t num = 0x00FF0000;
    int shiftvalue = 16;
    uint32_t res = shiftbits_right(num,shiftvalue);
    printf(" 0x%08x",res);
    res = shiftbits_left(num,shiftvalue);
    printf(" 0x%08x",res);

    return 0;
}