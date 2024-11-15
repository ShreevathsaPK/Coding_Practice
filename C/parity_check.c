// Parity Check: Write a function to check if the number of set bits is odd or even (parity check).

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int parity(uint32_t num){
    int evenoddtoggler =0;
    while(num){
        evenoddtoggler = evenoddtoggler ^ (num&1); //here we will just toggle left bit as we are concnerned only abt even or odd but not actual count.
        num = num >>1;
    }
    return evenoddtoggler;
}

int main(){
    uint32_t num = 0xFE;
    if(parity(num)){
        printf("Odd");
    }
    else{
        printf("Even");
    }

    return 0;
}