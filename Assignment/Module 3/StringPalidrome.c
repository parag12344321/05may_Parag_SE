//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
int main()
{
    char str[50];
    int i, length, flag = 0;
    printf("Enter the string to check for palidrome : ");
    scanf("%s", &str);
    length = 0;
    while(str[length] !='\0')
    {
        length++;
    }
   
    for(i = 0; i < length; i++)
    {
        if(str[i] != str[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        printf("\n%s is not a palidrome", str);
    }
    else 
    {
        printf("\n%s is palidrom", str);
    }
    return 0;
}