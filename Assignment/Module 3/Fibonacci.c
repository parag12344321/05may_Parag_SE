//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
    int i, no;
    int term1 = 0, term2 = 1;
    int nextTerm = term1 + term2;
    printf("Enter the number of terms : ");
    scanf("%d", &no);

    printf("Fibonacci series: %d, %d, ", term1, term2);

    for(i = 3; i <= no; i++)
    {
        printf("%d, ", nextTerm);
        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
    }
    return 0;

}