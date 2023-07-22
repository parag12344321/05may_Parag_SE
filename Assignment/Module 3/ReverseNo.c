//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
int main()
{
    int i;
    int rev[5];
    for(i = 0; i < 5; i++)
    {
        printf("Enter the value of revers[%d] : ", i);
        scanf("%d", &rev[i]);
    }
    for(i == 4; i >= 0; i--)
    {
        printf("\nValue of revers[%d] is : %d ", i, rev[i]);
    }
    return 0;


}