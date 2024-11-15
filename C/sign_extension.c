//Sign Extension: Write a function to perform sign extension on a specific bit length.
#include <stdio.h>
#include <stdint.h>

int32_t extenderf(uint32_t num,int base_num_length){
    uint32_t max_base_num = (1<<base_num_length)-1;
    if(num & (1<<(base_num_length-1))){
        return num | (~max_base_num);
    }
    else{
        return num;
    }
}

int main(){
    uint32_t num = 0xF9;   //F9 output FFFFFFF9, 0x00000009 for 0x09
    int base_num_length = 8;
    int32_t res = extenderf(num,base_num_length);
    printf("0x%08X",num);
    printf("0x%08X",res);
    return 0;
}