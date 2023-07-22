//WAP to print pattern no. 4 for cross tringe 
#include <stdio.h>
int main()
{
    int i, rows = 6;
    for (int i = 0; i <= rows - 1; i++) 
    {                                               //For Loop for Row 
        for (int j = 0; j <= i; j++)
        {                                           //For Loop for Col
            printf("*" " ");                        //prints * and blank space
        }

            printf(" \n");                           // new line
        }

            for (i = rows - 1; i >= 0; i--) 
            {                                       //For Loop for Row
                for (int j = 0; j <= i - 1; j++) 
                {                                   //For Loop for Col
                    printf("*" " ");                //prints * and blank space
                }
                    printf("\n"); //New line
             } return 0;

}