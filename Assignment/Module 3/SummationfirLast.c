//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include<stdio.h>
int main()
{
    int no = 0, firstNo = 0, lastNo = 0, sum = 0;
    printf("Enter the Digits to find summation of first and last Digit : ");
    scanf("%d", &no);
    lastNo = no % 10;
    
    while(no >= 10)
    {      
        no = no / 10;        
    }
    firstNo = no;
    sum -= firstNo + lastNo;
    printf("The sum of first no %d and last no %d = %d", firstNo, lastNo, sum);
    return 0;
}
