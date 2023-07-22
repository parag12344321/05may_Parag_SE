//WAP check if the given year is a leap year or not
#include<stdio.h>
int main()
{
    int leap;
    printf("Enter the year : ");
    scanf("%d", &leap);
    if(leap % 4 == 0)
    {
        printf("Year is leap.");
    }
    else
        {
            printf("Not a leap year.");
        }
        return 0;
}