//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
int main()
{
    int a[2], i, max = 0, min = 0;
    printf("Enter the Two Value : ");
    for(i = 0; i <= 1; i++)
    {
        scanf("%d", &a[i]);
    } 
    for(i = 0; i <= 1; i++)
    {
        if(a[i] > max)
        {
            //max = a[i];
            printf("\nMax number is : %d", a[i]);
            
        }
        else
        {
            printf("Min number is : %d", a[i]);
            //min = a[i];
        }
        //printf("Max is : %d");
        printf("\n");
        //printf("Min is : %d");
        //printf("\n");
    }
    return 0;
}