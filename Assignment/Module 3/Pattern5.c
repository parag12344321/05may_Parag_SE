//WAP to print pattern no. 5 fo  Alphabets piramid
#include <stdio.h>
int main() 
{
	int i, j, no=1 ,count;
	printf("Enter number of rows: ");//please enter 5 number of rows
	scanf("%d", &count);
	for (i=1; i<=count; i++)
     {
		printf("\n");
		for (j=1; j<=i; j++)      
        {
			printf(" %2d ", no);
			no++;
		}
	}
	return 0;
}
