/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters
and Function Overloading*/
#include<iostream>
using namespace std;
class Maths
{
public :
    inline int add(int a, int b) {return a+b;}
    inline int sub(int a, int b) {return a-b;}
    inline int mul(int a, int b) {return a*b;}
    inline float div(float a, float b) {return a/b;}
};
int main()
{
    Maths m1;
    cout<<"Addition of two numbers is: "<<m1.add(12, 5)<<endl;
    cout<<"Subtraction of two numbers is: "<<m1.sub(50, 10)<<endl;
    cout<<"Multiplication of two numbers is: "<<m1.mul(10, 7)<<endl;
    cout<<"Division of two numbers is: "<<m1.div(70, 36)<<endl;
    return 0;
}
