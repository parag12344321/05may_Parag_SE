//WAP to print pattern Alphabets piramid
#include <stdio.h>
int main()
 {
	int i, j;
	for (i=1;i<=5;i++)
     {
		for (j=1;j<=i;j++)
         {
			printf("%c", 'A' + j-1);
            printf(" ");
		}
		printf("\n");
	}
	return 0;
}