#include <stdio.h>
char* f();
char a ='a';
int main(int argc, char* argv[]) {
   char* temp = f();
   printf("%s",temp);
    return 0;
}
char *f(){
    return &a;
}

//The program prints a by returning the address of the global variable a and interpreting it as a string.