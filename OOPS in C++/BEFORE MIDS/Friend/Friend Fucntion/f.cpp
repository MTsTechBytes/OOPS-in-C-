using namespace std;
#include <iostream>
#include <string>

// Simple Friend Function Access

// Create two classes ClassA and ClassB.

// Make a function showData a friend of both classes that accesses and displays private data members of both classes.

// class A
// {
//     int a;
//     public: 
//     friend void showData(class A a1, class B b1);
// };

// class B
// {
//     int b;

//     public:
//     friend void showData(class A a1, class B b1);
// };

// void showData(class A a1, class B b1)
// {
//     cout << "Value A = " << a1.a << endl;
//     cout << "Value B = " << b1.b << endl;
// }

// int main()
// {
//     A a1;
//     B b1;
//     showData(a1, b1);

//     return 0;
// }








// Addition Using Friend Function

// Define a class Number with a private integer.

// Write a friend function add that takes two objects of Number and returns the sum of their values.

// class Number
// {
//     private:
//     int x;
    
//     public:
//     Number(int y) : x(y) {}

//     friend int add(class Number o1, class Number o2);

// };

// int add(class Number o1, class Number o2)
// {
//     return (o1.x + o1.x);
// }

// int main()
// {
//     Number n1(4);
//     Number n2(10);
//     cout << add(n1, n2);

//     return 0;
// }





// Comparing Private Members

// Define a class Box with a private member volume.

// Write a friend function compare that compares volumes of two boxes and returns the larger one.


// class Box
// {
//     private: 
//     float volume;

//     public:
//     Box(float v)
//     {
//         volume = v;
//     }

//     friend float compare(Box b1, Box b2);
// };

// float compare(Box b1, Box b2)
// {
//     if (b1.volume > b2. volume)
//     {
//         return b1.volume;
//     }
//     else 
//     {
//         return b2.volume;
//     }
// }

// int main()
// {
//     Box b1(7.4);
//     Box b2(6.4);
//     cout << compare(b1, b2);

//     return 0;
// }





