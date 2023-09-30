/*Write a program to find the multiplication values and 
the cubic values using inline function*/

#include<iostream>
using namespace std;
class Line
{
   public:
            inline float multi(float a,float b)//inline function
          {
                return(a*b);//multiplication
          }
            inline float cube(float a)//inline function
          {
                return(a*a*a);//Cube 
          }
};

int main()
{
    Line ln;//object create
    float val1,val2;
        cout<<"\nEnter 1st value :: ";
        cin>>val1;
        cout<<"\nEnter 2nd value :: ";
        cin>>val2;
              cout<<"\nMultiplication value is :: "<<ln.multi(val1,val2);
              cout<<"\n\nCube value of  [ " <<ln.cube(val1)<<" ] is :: ["<<ln.cube(val2)<<" ]\n";

              return 0;
}
