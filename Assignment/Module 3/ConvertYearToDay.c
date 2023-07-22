//WAP to convert years in to days and days into years
#include<stdio.h>
int main()
{
    int days, year;
    printf("Enter the number of days :");
    scanf("%d", &days);
    year = days/365;
    printf("days into years : %d", year);
    printf("\nEnter the years :");
    scanf("%d", &year);    
    days = year*365;
    printf("years into days : %d", days);
    return 0;

}