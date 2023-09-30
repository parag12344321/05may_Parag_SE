/*Create a class person having members name and age.
Derive a class student having member percentage. Derive another class
teacher having member salary. 
Write necessary member function to initialize,read and write data. 
Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;
class person
{
public :
        string nm;
        int age;
public :
        void getdata()
     {
        cout<<endl<<"----------------------------";
        cout<<endl<<"Enter Your Name :";
        cin>>nm;
        cout<<endl<<"Enter Your Age :";
        cin>>age;

     }
};
class student 
{
public :
        float per;
public :        
        void sdata()
     {
        cout<<endl<<"----------------------------";
        cout<<endl<<"Enter Student Percentage :";
        cin>>per;
     }

};
class teacher : public person, public student
{
private :        
    float salary;
public :    
    void tdata()
    {
        cout<<endl<<"----------------------------";
        cout<<endl<<"Enter Teacher Salary :";
        cin>>salary;
        cout<<endl<<"Your Name Is : "<<nm;
        cout<<endl<<"Your Age Is : "<<age;
        cout<<endl<<"Percentage : "<<per;
        cout<<endl<<"Teacher Salary : "<<salary;
    }
};
int main()
{
     teacher t1;
     t1.getdata();
     t1.sdata();
     t1.tdata();
     return 0;    
}