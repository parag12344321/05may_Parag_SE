/*Write a program of structure for five employee that provides the following information
 -print and display empno, empname, address and age*/
 #include <stdio.h>
// define structure
struct Empdata
{
    // data member - variable which was define inside the strucure
    int no;
    char nm[20];
    char add[100];
    int age;
};
int main()
{
    /* code */
    struct Empdata emp[5]; // create object of type "Empdata"
    int i;
    for (i = 0; i < 5; i++)
    {
    printf("Enter Employee Number: \n");
    scanf("%d", &emp[i].no);
    printf("Enter Employee Name: \n");
    scanf("%s", &emp[i].nm);
    printf("Enter the Address: \n");
    scanf("%s", &emp[i].add);
    printf("Enter the Age: \n");
    scanf("%d", &emp[i].age);
    }
    printf("\nEmpNo\tEname\t\tAddress\t\tAge");
    for(i = 0; i < 5; i++)
    {
        // printf("\n1------------------------%s--------------------------\n", st[i].nm);
        //printf("__________________________________________________");
        printf("\n%d |\t %s |\t %s |\t %d", emp[i].no, emp[i].nm, emp[i].add, emp[i].age);
       //printf("\nEmployee No. is %d \nEmployee Name is %s\nEmployee Address is %s\nEmplyee age is %d\n", emp[i].no, emp[i].nm, emp[i].add, emp[i].age);
    }
    return 0;
}