//wap find out length of string without using inbuilt function in c
#include<stdio.h>
int main()
{
    char str[50];
    int i, length = 0;
    
    //Get string input from the user
    printf("Enter the string : ");
    scanf("%s", str);
    
    /*Loop through each character 
    and increment the length till we reach the null character. */
    for(i = 0; str[i] != '\0'; i++)
        length++;
    
    //print the length
    printf("Length of String = %d\n", length);
    
    return 0;
}







/*#include<stdio.h>
int main()
{
    char str[50];
    int i;
    for(i = 0; str[i] !='\0'; i++)
    {
        printf("Enter The String : ");
        scanf("%d", &str[i]);
    }
    printf("String Length : %d", str[i]);

    return 0;
}
*/