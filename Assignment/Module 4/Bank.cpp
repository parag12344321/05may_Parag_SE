//Define a class to represent a bank account.
#include<iostream>
using namespace std;
#include<string.h>
class bank
{
    //Data Member Declaration
        int acno;
        char nm[100], acctype[100];
        float bal;  
   public:
        bank(int acc_no, char *name, char *acc_type, float balance)  //Parameterized Constructor
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
        }
        //Data Member Function Declaration
        void deposit();
        void withdraw();
        void display();
};
void bank::deposit()   //depositing an amount
{
        int depo1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>depo1;
        bal+=depo1;
}
void bank::withdraw()  //withdrawing an amount
{
        int with1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>with1;
        if(with1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=with1;
}
void bank::display()  //displaying the details
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;  
}
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
  
        bank b1(acc_no, name, acc_type, balance);  //object is created
        b1.deposit(); //
        b1.withdraw(); // calling member functions
        b1.display(); //
        return 0;
}



/*
//Define a class to represent a bank account.
#include<iostream>
using namespace std;
class bank
{
public :

    string dipoNm;
    int acNo;
    string typeOfAc;
    float bal;

   /* bank(string name, int acc_no, string acc_type, float balance)
    {
         dipoNm = name;
         acNo = acc_no;
         typeOfAc = acc_type;
         bal = balance;
    }
        void deposit();
        void withdraw();
        void display();

};
void deposit()
{
    int depo1;
    cout<<"\n Enter Deposit Amount = ";
    cin>>depo1;
    bal+=depo1;
}
void withdraw()
{
    int with1;
    cout<<"\n Enter Withdraw Amount = ";
    cin>>with1;
    if(with1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=with1;
}
void display()
{
    cout<<"\n ----------------------";
    cout<<"\n Accout No. : "<<acNo;
    cout<<"\n Name : "<<dipoNm;
    cout<<"\n Account Type : "<<typeOfAc;
    cout<<"\n Balance : "<<bal; 
}
int main()
{
    string name;
    int acc_no;
    string acc_type;
    float balance
    cout<<"\n Enter Details: \n";
    cout<<"-----------------------";
    cout<<"\n Name : ";
    cin>>name;
    cout<<"\n Accout No. ";
    cin>>acc_no;
    cout<<"\n Account Type : ";
    cin>>acc_type;
    cout<<"\n Balance : ";
    cin>>balance;

    bank b1(name, acc_no, acc_type, balance);  //object is created
    b1.deposit(); //
    b1.withdraw(); // calling member functions
    b1.display(); //
    return 0;
}
*/