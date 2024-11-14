//Count Set Bits: Write a function to count the number of 1’s (set bits) in a 32-bit integer.
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//Use lookup table logic most efficient.

int lookuptable[256];

int Init_Lookup(){
    for(int i =0 ; i<256;i++){
        lookuptable[i]= (i&1) + lookuptable[i>>1];
        
    }

}

int count_set_bits(uint32_t num){
    return lookuptable[num&0xff]+lookuptable[(num>>8)&0xff]+lookuptable[(num>>16)&0xff]+lookuptable[(num>>24)&0xff];

}

int main(){
    Init_Lookup();
    uint32_t num = 0b0111110101010101111;
    int res = count_set_bits(num);
    printf("%d",res);
    return 0;
}