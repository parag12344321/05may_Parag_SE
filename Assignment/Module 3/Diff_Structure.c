//WAP to show difference between Structure and Union.
//Structure Program:
#include<stdio.h>
// define structure
struct Empdata
{
    // data member - variable which was define inside the strucure
    int Empid;
    char Empnm[25];
}emp; //define the object
int main()
{
    printf("Enter Employee id: ");
    scanf("%d", &emp.Empid);
    printf("Enter Employee name: ");
    scanf("%s", &emp.Empnm);
    printf("=============================================");
    printf("\nEmployee ID is %d and Employee Name is %s\n", emp.Empid, emp.Empnm);
    printf("=============================================");
    return 0;
}
