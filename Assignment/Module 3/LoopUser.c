//WAP to take 10 no. Input from user and find out Even, Odd, sum of Even, some of Odd
#include<stdio.h>
int main()
 {
    int i, even = 0;
    int odd = 0;
    int a[10];
    
    for(i = 0; i < 10; i++)
    {
        printf("Enter the value of [%d]: ", i);
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            even = even + a[i];
            printf("\nThis is an Even Number", a[i]);
            printf("\n");

        }   
        else
        {
            
            printf("\nThis is an odd Number", a[i]);
            odd = odd + a[i];
            printf("\n");
        }
        
        
    }

    for (i = 0; i < 10; i++)
    {
        printf("\nValue of a[%d] is: %d", i, a[i]);
        
    } 
    printf("\nSum of even numbers are : %d", even); 
    printf("\nSum of odd numbers are : %d", odd);   
    return 0;
}