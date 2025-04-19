using namespace std;
#include <iostream>
#include <string>

// 1. Basic Multiple Inheritance
// Problem:
// Create two base classes Person (with name) and Academic (with marks).
// Create a derived class Student that inherits from both.
// Display name and marks using the derived class object.

// class Person
// {
//     protected:
//     string name;

//     public:
//     Person(string n) : name(n) {} 
// };

// class Academic
// {
//     protected:
//     float marks;

//     public:
//     Academic(float m) : marks(m) {}
// };

// class Student : public Person, public Academic
// {
//     public:
//     Student(string n, float m) : Person(n), Academic(m) {}

//     void show()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Marks : " << marks << endl;
//     }
// };

// int main()
// {
//     Student s("Kainat", 1040);
//     s.show();

//     return 0;
// }



// 2. Multiple Inheritance with Common Function Names
// Problem:
// Define two base classes PrinterA and PrinterB each with a function print().
// Create a derived class CombinedPrinter that inherits both and resolves ambiguity using scope resolution.

// class PrinterA
// {
//     public:
//     void print()
//     {
//         cout << "printer A" << endl;
//     }
// };

// class PrinterB
// {
//     public:
//     void print()
//     {
//         cout << "printer B" << endl;
//     }
// };

// class CombinedPrinter : public PrinterA, public PrinterB
// {
//     public:
//     void print()
//     {
//         PrinterA::print();
//         PrinterB::print();
//         cout << "Combined Printer" << endl;
//     }
// };

// int main()
// {
//     CombinedPrinter cp;
//     cp.print();

//     return 0;
// }


// 3. Real-Life Example of Multiple Inheritance
// Problem:
// Create a class Employee with private data like empID.
// Create a class Department with private data deptName.
// Create a class Manager that inherits both and displays full info (ID + Department).

// class Employee
// {
//     protected:
//     int empID;

//     public:
//     Employee(int id) : empID(id) {} 

// };

// class Department
// {
//     protected:
//     string deptName;

//     public:
//     Department(string n) : deptName(n) {}
// };

// class Manager : public Employee, public Department
// {
//     public:
//     Manager(int id, string n) : Employee(id), Department(n) {}

//     void display()
//     {
//         cout << empID << ", " << deptName << endl;
//     }

// };

// int main()
// {
//     Manager m1(101, "IT");
//     m1.display();

//     return 0;
// }



// 4. Constructor Call Sequence in Multiple Inheritance
// Problem:
// Create two base classes with constructors that print messages.
// Create a derived class inheriting both and observe the order of constructor calls when an object is created.

// class Parent1
// {
//     public:
//     Parent1()
//     {
//         cout << "I am Parent1." << endl;
//     }
// };

// class Parent2
// {
//     public:
//     Parent2()
//     {
//         cout << "I am Parent2." << endl;
//     }
// };

// class Child : public Parent2, public Parent1 //(this will affect the arrangement of parent constructor calling)
// {
//     public:
//     Child(): Parent1(), Parent2() {}   //its arrangement will not affect anything
// };

// int main()
// {
//     Child c1;

//     return 0;
// }


// 5. Multiple Inheritance with Protected Members
// Problem:
// Create two base classes Shape and Paint with protected members area and color.
// Create a class Wall that inherits both and uses those members to compute and display values.

// class Shape 
// {
//     protected:
//     float area;
    
//     public:
//     Shape(float a) : area(a) {}
// };

// class Paint
// {
//     protected:
//     string color;

//     public:
//     Paint(string c) : color(c) {}
// };

// class Wall : public Shape, public Paint
// {
//     public:
//     Wall(float a, string c) : Shape(a), Paint(c) {}

//     void display()
//     {
//         cout << area << ", " << color << endl;
//     }
// };

// int main()
// {
//     Wall w1(24.242, "Brown");
//     w1.display();
//     return 0;
// }


// 7. Student Report System
// Problem:
// Create a class Marks with private subjects marks.
// Create a class Sports with private sports score.
// Create a class Result that inherits both and computes the final score

class Marks
{
    protected:
    int sub1, sub2, sub3;

    public:
    Marks(int s1, int s2, int s3) : sub1(s1), sub2(s2), sub3(s3) {}

    int sum()
    {
        return (sub1 + sub2 + sub3);
    }
};

class Sports
{
    protected:
    int sportsScore;

    public:
    Sports(int ss) : sportsScore(ss) {}

};

class Result : public Marks, public Sports
{
    public:
    Result(int s1, int s2, int s3, int ss) : Marks(s1, s2, s3), Sports(ss) {}
    
    void showResult()
    {
        cout << "Final Score : " << sum() + sportsScore << endl;
    }
};

int main()
{
    Result r1(90, 83, 95, 100);
    r1.showResult();

    return 0;
}