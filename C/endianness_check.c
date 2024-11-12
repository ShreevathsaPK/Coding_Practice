#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned int num = 1;
    char * byte = (char *)&num;
    if(*byte==1){printf("Little endian");}
    else{printf("Big endain");}

    return 0;
}