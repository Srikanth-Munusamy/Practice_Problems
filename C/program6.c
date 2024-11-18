#include<stdio.h>
#include<stdlib.h>
int main(){
    char *ptr1,*ptr2;
    printf("%d %x",sizeof(ptr1),sizeof(ptr2));
    return 0;
}

// This program prints the size of the pointers ptr1 and ptr2. On most systems:

// sizeof(ptr1) and sizeof(ptr2) will be the same and depend on the architecture:
// 4 bytes on a 32-bit system.
// 8 bytes on a 64-bit system.
// The output will be something like 8 8 or 4 4, where %x converts the second sizeof result into hexadecimal.