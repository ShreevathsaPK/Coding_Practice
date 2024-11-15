//Insert Bits from One Number into Another: Write a function to insert bits from one number into another at specified positions.
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){

    uint32_t onenumber = 0xffeeeeff;
    uint32_t anothernumber = 0xaabbbbaa;
    int start = 8;
    int end = 23;
    uint32_t mask = (((1<<(end - start +1))-1)<<start) ;
    uint32_t mask_onenumber = (onenumber & ~mask) ;
    uint32_t mask_anothernumber = (anothernumber & mask);
    printf("Mask : 0x%08x",mask);
    printf("One :0x%08x",mask_onenumber);
    printf("Another : 0x%08x",mask_anothernumber);
    uint32_t res = mask_onenumber | mask_anothernumber ;
    printf("0x%08x",res);

    return 0;
}