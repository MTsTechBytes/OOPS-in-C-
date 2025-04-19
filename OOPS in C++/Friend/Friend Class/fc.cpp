using namespace std;
#include <iostream>
#include <string>

// 1. Basic Friend Class
// Create two classes Alpha and Beta.
// Make Beta a friend class of Alpha and access Alpha’s private members inside Beta.

// class Alpha
// {
//     int x;
//     public:
//     Alpha(): x(5) {}

//     friend class Beta;
// };

// class Beta
// {
//     public:
//     void show(Alpha A)
//     {
//         cout << A.x<< endl;
//     }
// };

// int main()
// {
//     Alpha A;
//     Beta B;
//     B.show(A);

//     return 0;
// }


// 2.Friend Class for Internal Access
// Define a class Account with private balance.
// Make class Bank a friend that can access Account's balance and perform operations like deposit/withdraw.

// class Account
// {
//     private:
//     float balance;

//     public:
//     Account (float bal) : balance(bal) {}

//     friend class Bank;
// };

// class Bank
// {
//     public:
//     void deposit(Account &a)
//     {
//         a.balance--;
//         cout << a.balance << endl;
//     }
//     void withdraw(Account &a)
//     {
//         a.balance++;
//         cout << a.balance << endl;
//     }
// };

// int main()
// {
//     Account a(10000);
//     Bank b;
//     b.deposit(a);
//     b.withdraw(a);

//     return 0;
// }


// 3.Chained Friend Class
// Create three classes X, Y, and Z.
// Make Y a friend of X, and Z a friend of Y.
// Try accessing private data of X from Z and analyze the result (Hint: not allowed, shows friendship is not transitive).

// class X
// {
//     int a;

//     public:
//     X() : a(10) {}

//     friend class Y;
// };

// class Y
// {
//     int b;

//     public:
//     Y() : b(20) {}

//     void show(X &x)
//     {
//         cout << x.a << endl;
//     }

//     friend class Z;
// };

// class Z
// {

//     public:
//     void show(Y &y)
//     {
//         cout << y.b << endl;
//     }
// };

// int main()
// {
//     X x1;
//     Y y1;
//     y1.show(x1);
//     Z z1;
//     z1.show(y1);

//     return 0;
// }




// 4.Friend Class with Constructor Access
// Create a class Date and another class Event.
// Make Event a friend of Date and allow it to initialize and read private members of Date.

class Date
{
    int day, month, year;
    
    friend class Event;
};

class Event
{
    public:
    Event(Date &d) //: d.day(22), d.month(12), d.year(2005) {}  is not running      
    {
        d.day = 22;
        d.month = 12;
        d.year = 2005;
    }

    void read(Date &d)
    {
        cout << d.day << "-" << d.month << "-" << d.year << endl;
    }
};

int main()
{
    Date d1;
    Event e1(d1);
    e1.read(d1);

    return 0;
}






