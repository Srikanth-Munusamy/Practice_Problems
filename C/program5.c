#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=10;
    {
        int x=10;
        printf("%d",x);
    }
    return 0;
}

//This program prints 10 because the inner block's x (local to the block) shadows the outer block's x, and the inner x is used in the printf statement.






