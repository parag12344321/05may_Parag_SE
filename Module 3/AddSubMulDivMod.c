//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the Value Of a :");
	scanf("%d", &a);
	printf("Enter the Value Of b :");
	scanf("%d", &b);
	printf("\nAddition of the a and b is : %d",a+b);
	printf("\nSubtraction of the a and b is : %d",a-b);
	printf("\nMultiplication of the a and b is : %d",a*b);
	printf("\nDivision of the a and b is : %d",a/b);
	printf("\nModulo of the a and b is : %d",a%b);
	return 0;
}
