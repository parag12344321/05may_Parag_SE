/*Write a program to calculate the area of circle,
rectangle and triangle using Function Overloading*/
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int l,b;
        float r,bs,ht;
        
        cout<<"Enter Length And Breadth Of Rectangle:";
        cin>>l>>b;        
        cout<<"Enter Base and Height Of Triangle:";
        cin>>bs>>ht;
        cout<<"Enter Radius Of Circle:";
        cin>>r;
        cout<<"\nArea of Rectangle is "<<area(l,b);
        cout<<"\nArea of Triangle is "<<area(bs,ht);
        cout<<"\nArea of Circle is "<<area(r);
}

int area(int l,int b)
{
    return(l*b);
}
float area(float bs,float ht)
{
   return(0.5*bs*ht);
}
float area(float r)
{
    return(3.14*r*r);
}