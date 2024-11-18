#include <stdio.h>
int a = 20;
int main() {
    int a = 10;
    printf("%d",a);
    return 0;
}

//This program prints 10 because the local variable a inside the main function takes precedence over the global variable a.