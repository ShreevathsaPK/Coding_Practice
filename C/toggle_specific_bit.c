#include <stdio.h>
#include <stdint.h>

int togglebit(uint32_t num,int bit_position){
    return num ^ (1<<bit_position);
    // 1101001 ^ 0010000
    // 1111001
}

int main(){

    //Toggle a Specific Bit: Write a function to toggle a specific bit in a 32-bit integer.
    uint32_t num = 0b00001111;
    printf("%d",num);
    int bit_position = 0;
    num = togglebit(num,bit_position);
    printf("%d",num);
    return 0;
}