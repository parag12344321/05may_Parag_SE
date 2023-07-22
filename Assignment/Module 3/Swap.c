//WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
    int a = 85, b = 55;
    printf("\nBefor value swapping value of the a is: %d and b is: %d", a,b);
    b = a;
    a = b;
    printf("\nAfter value swapping value of the a is: %d and b is: %d", a,b);
    printf("\nswap two number without using third variable value is: %d", b);
    return 0;
}

/*
Output
a = 85
b = 55
b = a aetle b = 85 thase
a = b aetle a = 85 thase
*/
