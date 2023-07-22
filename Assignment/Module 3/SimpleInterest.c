//WAP to find simple interest
#include<stdio.h>
int main()
{
    //Simple interest formula = amount*rat of interest*time/100
    float p;// Principal is the amount
    float r;// Rate of interest
    float t;// Time is denoted by t.(time period of years)
    float si;//Simple intrest
    printf("Enter the amount :");
    scanf("%f", &p);
    printf("Enter the rate :");
    scanf("%f", &r);
    printf("Enter the time(Duration) :");
    scanf("%f", &t);
    si = p*r*t/100;
    printf("Simple Intrest : %f", si);
    
    //printf("Simple Intrest : %f", p*r*t/100);
    return 0;
}