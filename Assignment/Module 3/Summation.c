//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main()
{
    int no, sum = 0;
    printf("Enter any number to find summation is : ");
    scanf("%d", &no);
    while(no != 0)
    {
        sum -= no % 10;
        no = no / 10;
    }
    printf("Summation of Numbers = %d", sum); //sum of numbers
    return 0;
}