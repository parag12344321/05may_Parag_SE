//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{    
    int no ;
    printf("Enter the Number is an Even or Odd :");
    scanf("%d", &no);
    (no % 2 == 0) ? (printf("Number is Even")) : (printf("Number is Odd"));
    return 0;
}