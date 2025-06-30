using namespace std;
#include<iostream>

template <class T, class U>
T sum(T a, U b)
{
    cout << "Total is : " << a + b << endl;
}
int main()
{
    sum(5.5, 6.5); // This will call the template function with double type
    sum(5, 6); // This will call the template function with int type
    sum(5.5f, 6.5f); // This will call the template function with float type
    sum(5, 6.5f); // This will call the template function with int and float types
    sum(5.5f, 6); // This will call the template function with float and int 
    return 0;
}