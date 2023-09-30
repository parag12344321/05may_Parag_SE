//Write a program of to swap the two values using templates
#include <iostream>
using namespace std;
  
// Function template to swap
// two numbers
template <typename T>
int swap_numbers(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
  
// Driver code
int main()
{
    int a, b;
    a = 50, b = 70;
  
    // Invoking the swap()
    swap_numbers(a, b);
    cout << a << " " << b << endl;
    return 0;
}