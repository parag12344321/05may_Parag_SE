/*Write a program of structure employee that provides the following information 
 -print and display empno, empname, address and age*/
 #include<stdio.h>
// define structure
struct Empdata
{
    // data member - variable which was define inside the strucure
    int no;
    char nm[20];
    char add[100];
    int age;
}emp; //define the object
int main()
{
    /* code */
    printf("Enter Employee Number: \n");
    scanf("%d", &emp.no);
    printf("Enter Employee Name: \n");
    scanf("%s", &emp.nm);
    printf("Enter the Address: \n");
    scanf("%s", &emp.add);
    printf("Enter the Age: \n");
    scanf("%d", &emp.age);
    printf("\nEmployee No. is %d \nEmployee Name is %s\nEmployee Address is %s\nEmplyee age is %d\n", emp.no, emp.nm, emp.add, emp.age);
    return 0;
}