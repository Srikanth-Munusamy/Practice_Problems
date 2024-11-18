#include<stdio.h>
int main(){
    if(printf("cppbuzz.com")){
        printf("cppbuzz.com");
    }
    return 0;
}

//This program prints cppbuzz.comcppbuzz.com because the first printf prints cppbuzz.com and returns a non-zero value, causing the if condition to execute the second printf.