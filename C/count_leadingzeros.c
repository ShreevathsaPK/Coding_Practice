//Count Leading Zeros: Implement a function that counts the number of leading zeros in an integer without using built-in functions.
#include <stdio.h>
#include <stdint.h>

int CountLeadingZeros(uint32_t num){
    if(num == 0 ) return 32;
    int shift = 0;
    while(num != 0){
        num >>=1;
        shift ++;
    }
    return 32-shift;
}

int main(){
    uint32_t num = 0x1FF0FFFF;
    printf("Leading zeros : %d",CountLeadingZeros(num));
    return 0;
}