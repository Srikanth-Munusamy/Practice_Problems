#include "stdio.h"

int main() {
    if(printf("C programming is")){
        printf("easy");
    }
    else{
        printf("hard");
    }
    return 0;
}

//The program prints C programming iseasy because the printf inside the if always returns a non-zero value, so the else block is never executed.