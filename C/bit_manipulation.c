#include <stdlib.h>
#include <stdio.h>

int set_bit(int num,int bit_position){
    num = num | (1<<bit_position) ;
    return num;
}

int clear_bit(int num,int bit_position){
    num = num & ~(1<<bit_position) ;
    return num;
}

int read_bit(int num,int bit_position){
    
    printf("%d",num & (1<<bit_position));
}


int main(){

    //Bit Manipulation : write code to set bit clear bit and read bit at a particular position.
    int num = 5;
    int bit_postiion=0;
    num = set_bit(num,bit_postiion);
    printf("%d",num);
    num = clear_bit(num,bit_postiion);
    printf("%d",num);
    read_bit(num,bit_postiion);
    return 0;
}