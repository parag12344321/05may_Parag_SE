//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int main()
{
    int a, b;
    int choice;
    printf("Enter the two digit: ");
    scanf("%d%d", &a, &b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nAddition of the a and b is: %d", a+b);
            break;
        
        case 2:
            printf("\nSubtraction of a and b is: %d", a-b);
            break;

        case 3:
            printf("\nMultiplication of the a and b is: %d", a*b);
            break;

        case 4:
            printf("\nDivision of the a and b is: %f", (float)a/(float)b);
            break;
        
        default:
            printf("\nYour choice is invalid..............");
            break;
    }
    return 0;
}