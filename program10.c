#include "stdio.h"

char *f();
char a = 'a';

int main() {
    char *temp = f();
    printf("%&",temp);
    return 0;
}

char *f(){
    return &a;
}