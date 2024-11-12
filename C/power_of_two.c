//Power of Two Check: Write a function that checks if an integer is a power of two without using loops or recursion.
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Power of Two Check :Write a function that checks if an integer is a power of two without using loops or recursion
    int res;
    int num = 234;
    res=(num&(num -1))==0?1:0;

    return 0;
}
