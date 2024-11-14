//Count Trailing Zeros: Write a function to count the number of trailing zeros in a 32-bit integer.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int cal_trailingzeros(uint32_t num){
    int res =0;
    while((num & 1)!= 1){
        res++;
        num = num >>1;
    }
    return res;
}

int main(){

    uint32_t num = 0b0101011000;

    int res = cal_trailingzeros(num);
    printf("%d",res);
    return 0;
}