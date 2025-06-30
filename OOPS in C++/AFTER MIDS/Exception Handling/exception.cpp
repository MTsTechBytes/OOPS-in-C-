#include <iostream>
#include <string>
using namespace std;

// class SafeArray 
// {
//     int arr[5];

// public:
//     SafeArray() {
//         for (int i = 0; i < 5; i++)
//             arr[i] = i * 10;
//     }

//     class Error1
//     {
//         public:
//         string val1;
//         Error1(string v) : val1(v) {}
//     };

//     class Error2
//     {
//         public:
//         string val2;
//         Error2(string v) : val2(v) {}
//     };



//     int operator[](int index) 
//     {
//         if (index < 0)
//         {
//             throw Error1("Indexes Underflow");
//         }
//         else if (index >= 5)
//         {
//             throw Error2("Indexes Overflow");
//         }
//         return arr[index];
//     }
// };

// int main() {
//     SafeArray sa;

//     try {
//         cout << sa[2] << endl;
//         cout << sa[-1] << endl; //Will throw
//         cout << sa[6] << endl; // Will throw
//     } 
//     catch (SafeArray :: Error1 e1) {
//         cout << "Exception: " << e1.val1 << endl;
//     }
//     catch (SafeArray :: Error2 e2)
//     {
//         cout << "Exception: " << e2.val2 << endl;
//     }

//     return 0;
// }







// Exception Handling For Stack
// class Stack
// {
//     int arr[5];
//     int top;
// public:
//     Stack() : top(-1) {}

//     class Error1
//     {
//     public:
//         string val1;        
//         Error1(string v) : val1(v) {}
//     };
//     class Error2
//     {
//     public:
//         string val2;
//         Error2(string v) : val2(v) {}
//     };

//     void push(int v)
//     {
//         arr[++top] = v;
//         if (top > 4)
//         {
//             throw Error1("Stack Overflow");
//         }  
        
//     }

//     int pop()
//     {
//         if (top < 0)
//         {               
//             throw Error2("Stack Underflow");
//         }
//         return arr[top--]; //top = 1
//     }
//     void display()
//     {
//         for (int i = 0; i <= 4; i++)
//         {
//             cout << arr[i] << endl;
//         }
//         cout << "Number of elements in Stack are: " << top + 1 << endl;
//     }
// };  

// int main()
// {
//     Stack s;
//     try
//     {
//         s.push(10); //0
//         s.push(20); //1
//         s.push(30); //2
//         s.push(40); //3
//         s.push(50); //4
//         s.push(60); // Will throw Stack Overflow
//         s.display();

//         cout << "Popped element: " << s.pop() << endl;
//         cout << "Popped element: " << s.pop() << endl;
//         cout << "Popped element: " << s.pop() << endl;
//         cout << "Popped element: " << s.pop() << endl;
//         cout << "Popped element: " << s.pop() << endl; // Will throw Stack Underflow
//     }

//     catch (Stack::Error1 e1)
//     {
//         cout << "Exception: " << e1.val1 << endl;
//     }
//     catch (Stack::Error2 e2)
//     {
//         cout << "Exception: " << e2.val2 << endl;
//     }
//     return 0;
// }



// DIVIDE BY ZERO EXCEPTION HANDLING
// class Calculator
// {
//     int a, b;
// public:
//     Calculator() : a(0), b(0) {}
//     Calculator(int x, int y) : a(x), b(y) {}
//     class Error
//     {   
//     public:
//         int val;
//         string message;
//         Error() : val(0), message("") {}
//         Error(int v, string msg) : val(v), message(msg) {}
//     };

//     int divide()
//     {
//         if (b == 0)
//         {
//             throw Error(b, "Division by zero is not allowed");
//         }
//         return a / b;
//     }
// };

// int main()
// {
//     Calculator c(10, 0); // 10/0
//     try
//     {
//         cout << "Result: " << c.divide() << endl;
//     }
//     catch (Calculator::Error e)
//     {
//         cout << "Error Value: " << e.val << endl;
//         cout << "Error Message: " << e.message << endl;
//     }
//     return 0;
// }


int main()
{
    try
    {
            int a = 10, b = 0;
            if (b == 0)
            {
                throw b;
            }
            cout << "Result: " << a / b << endl;

    }
    
    catch (int e)
    {
        cout << "Exception: " << e << endl;
    }
    
}

