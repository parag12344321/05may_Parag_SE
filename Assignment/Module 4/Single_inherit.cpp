/*Assume a class cricketer is declared.
Declare a derived class batsman from cricketer.
Data member of batsman. Total runs, Average runs and best performance.
Member functions input data, calculate average runs,
Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer//Base or Parent class define
{
public :
    //Data Member Declare
    int r1, r2, r3, r;
    float avg;
    string performance;

    cricketer()//define coustructor
    {
        cout<<"Enter First ODI Runs :";//input value
        cin>>r1;
        cout<<"Enter Second ODI Runs :";//input value
        cin>>r2;
        cout<<"Enter Third ODI Runs :";//input value
        cin>>r3;
        
    }
};
class batsman : public cricketer//Single level inharitance
{
public :
    batsman()//constructor define  
    {
       r=r1+r2+r3;//Total runs
       avg = r/3.0;//average runs
       cout<<"\nTotal Runs :"<<r;
       cout<<"\nTotal Average Runs :"<<avg;       
        
            if(r>100)//perfomance
            {
             cout<<endl<<"Best Perfomance"<<performance;
            }
            else
            {
             cout<<endl<<"Give Better Perfomance in next match"<<performance;
            }
    }    
        
};        
int main()
{
    batsman b1;
    return 0;
}