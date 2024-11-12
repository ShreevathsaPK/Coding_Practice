#include <stdlib.h>
#include <stdio.h>

void memcpy_n(void * dest, void * source, size_t n){
        char *d = (char *)dest;
        char * s = (char *)source;

        for(size_t i=0;i<n;i++){
            d[i]=s[i];
        }

}

int main(){

    printf("Implement memcpy() : write a custom memcpy() function to copy data from one memory location to another.");
    char  source[] = "Shreevathsa";
    char  dest[20];
    memcpy_n(dest,source,sizeof(source));
    printf("Src : %s",source);
    printf("Dest :%s",dest);

    return 0;
}