using namespace std;
#include <iostream>
#include <conio.h>

template <class T>
class Demo
{
    T num1, num2;
    public:
        Demo(T n1, T n2) : num1(n1), num2(n2) {}
    
    void check()
    {
        if (num1 > num2)
        {
            cout << num1 << " is the largest number" << endl;
        }
        else
        {
            cout << num2 << " is the largest number" << endl;
        }
    }
};
int main()
{
    Demo <float> obj1(5.4, 5.6);
    obj1.check();
    Demo <int> obj2(6,2);
    obj2.check();

    return 0;
}