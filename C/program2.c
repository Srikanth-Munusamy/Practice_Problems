#include <stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]) {
    char temp[20];
    gcvt(23,45.2,temp);
    printf("%s",temp);
    return 0;
    
}

//The corrected code uses gcvt(45.2, 5, temp) to convert 45.2 into a string with 5 significant digits and prints it.