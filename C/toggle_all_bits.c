//Toggle All Bits: Write a function to toggle all bits in a 32-bit integer.
#include <stdio.h>
#include <stdint.h>

int main(){

    uint32_t num = 0xAAAFAAF;
    printf("0x%08x",num^(0xFFFFFFFF));
    return 0;
}