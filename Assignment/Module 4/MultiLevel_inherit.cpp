/*Assume that the test results of a batch of students
 are stored in three different classes. 
 Class Students are storing the roll number.
 Class Test stores the marks obtained in two subjects and class result
 contains the total marks obtained in the test. 
 The class result can inherit the details of the marks obtained in
 the test and roll number of students*/
 
#include<iostream>
using namespace std;

class Students
{
public :
    int roll;
    char name[25];
public :
    void getdata()
    {
        cout<<endl<<"----------------------------";
        cout<<endl<<"Enter Student Roll Number";
        cin>>roll;
        cout<<endl<<"Enter Student Name";
        cin>>name;
    }
    void putdata()
    {
       cout<<endl<<"----------------------------";
       cout<<"\n ********** Student Marklist **********";
       cout<<endl<<"Enter Student Roll Number :";
       cin>>roll;
       cout<<endl<<"Enter Student Name :";
       cin>>name;
       cout<<endl<<"Student Roll Number :"<<roll;
       cout<<endl<<"Student Name :"<<name<<endl; 
    }
};
class Test : public Students //class test derived from class students
{
public :
    int sub1, sub2, total;    
    float per;
public :
    void subdata()
    {
        cout<<endl<<"Enter Marks For Subject 1 :";
        cin>>sub1;
        cout<<endl<<"Enter Marks For Subject 2 :";
        cin>>sub2;
    }
    void display()
    {
    
        cout<<endl<<"Marks Of Subject 1 :"<<sub1;
        cout<<endl<<"Marks Of Subject 2 :"<<sub2;
    }
};
class Result : public Test //class result derived from class test
{
public :
    results()
    {
        total = (sub1+sub2);
        per = (sub1+sub2)/2.0;
        cout<<endl<<"Total Marks :"<<total;
        cout<<endl<<"Total Percentage :"<<per;
        if(per<30)
        {
            cout<<endl<<"Result = Fail";
            cout<<"\n ----------------------------------------- \n";
            cout<<"\n ----------------------------------------- \n";
        }
        else
        {
            cout<<endl<<"Result = Pass";
            cout<<"\n ----------------------------------------- \n";
            cout<<"\n ----------------------------------------- \n";
        }
        
        
    }
};
int main()
{
    Result r1; //object 'r1' is created of derived class result
    int count, i;
    cout<<"Enter The No. of Students :";
    cin>>count;
    for(i = 0; i < count; i++)
    {
        r1.putdata();
        r1.subdata();
        r1.display();
        r1.results();
    }
    return 0;
}

   