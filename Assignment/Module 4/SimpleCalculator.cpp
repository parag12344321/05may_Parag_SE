//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
public:
// Declare the data member
    int a, b;
    int choice;

    calculator()//define constructor
    {
        cout<<"**********CALCULATOR**********";
        cout<<"\n1.Additions";
        cout<<"\n2.Substraction";
        cout<<"\n3.Multiplications";
        cout<<"\n4.Division";
        cout<<"\n******************************";
        cout <<"\nEnter your choice: ";
        cin >> choice;
    }
        // Show the data
        void display()
        {
            switch(choice)//function for choice 
            {
            case 1: 
                cout<<"Enter First Digit :";
                cin>>a;
                cout<<"Enter Second Digit :";
                cin>>b;
                cout<<"\nAddition of the a and b is:"<< a+b;
            break;

            case 2:
                cout<<"Enter First Digit :";
                cin>>a;
                cout<<"Enter Second Digit :";
                cin>>b;
                cout<<"\nSubstraction of the a and b is: "<< a-b;
            break;

            case 3:
                cout<<"Enter First Digit :";
                cin>>a;
                cout<<"Enter Second Digit :";
                cin>>b;
                cout<<"\nMultiplication of the a and b is: "<< a*b;
            break;

            case 4:
                cout<<"Enter First Digit :";
                cin>>a;
                cout<<"Enter Second Digit :";
                cin>>b;
                cout<<"\nDivision of the a and b is: "<< (float)a/(float)b;
            break; 

            default :
                cout<<"your choice is invalid.................";
            break;
            }
        }   
        
    };

int main()
{
    calculator c1;//create object
    c1.display(); //output   
}