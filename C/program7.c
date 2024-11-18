#include<stdio.h>
int a= 20;
int main(){
    int a=10;
    printf("%d",::a);
    return 0;
}

//This code will result in a compilation error because the scope resolution operator :: is not supported in C; it is specific to C++.