using namespace std;
#include <iostream>
#include <string>

// 1. Student & Address Example
// Problem:
// Create two classes:
// Address: holds city, state, and zip.
// Student: has name, roll number, and an Address object (passed during construction).
// Demonstrate how Student uses Address via aggregation.

// class Address
// {
//     string city, state;
//     int zip;

//     public:
//     //Address() : city("Islamabad"), state("Pakistan"), zip(1922) {}

//     //Address(string c, string s, int z) : city(c), state(s), zip(z) {};

//     void getAd()
//     {
//         cout << "Enter city : ";
//         cin >> city;
//         cout << "Enter state : ";
//         cin >> state;
//         cout << "Enter zip : ";
//         cin >> zip;
//     }

//     void showAd()
//     {
//         cout << "City : " << city << endl;
//         cout << "State : " << state << endl;
//         cout << "Zip : " << zip << endl;
//     }
// };

// class Student
// {
//     string name;
//     int rollNo;
//     Address a1;

//     public:
//     //Student() : name("XYZ"), rollNo(000) {}

//     //Student(string n, int r) : name(n), rollNo(r) {}

//     void getSt()
//     {
//         a1.getAd();
//         cout << "Enter student name : ";
//         cin >> name;
//         cout << "Enter roll no : ";
//         cin >> rollNo;
        
//     }

//     void showSt()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Roll No : " << rollNo << endl;
//         a1.showAd();
//     }
// };

// int main()
// {
//     Student s1;
//     s1.showSt();

//     return 0;
// }


// 2. Department & Employee
// Problem:
// Define: Employee class with ID, name.
// Department class with name and a list of Employee objects.
// Use aggregation to show a department consists of employees but does not own them.

// class Employee
// {
//     int ID;
//     string name;

//     public:
//     Employee() : ID(00), name("XYZ") {}

//     void getEmp()
//     {
//         cout << "Enter employee ID : ";
//         cin >> ID;
//         cout << "Enter employee Name : ";
//         cin >> name;
//     }

//     void showEmp()
//     {
//         cout << "Employee ID : " << ID << endl;
//         cout << "Employee Name : " << name << endl;
//     }
// };

// class Department
// {
//     string deptName;
//     Employee e[3];
    
//     public:
//     Department() : deptName("ABC") {}

//     void getDept()
//     {
//         cout << "Enter Department Name : ";
//         cin >> deptName;
//         cout << "Enter Employee Details : " << endl;
//         for(int i = 0; i <= 2; i++)
//         {
//             e[i].getEmp();
//         }
//     }

//     void showDept()
//     {
//         cout << "Department Name : " << deptName << endl;
//         cout << "Employee Details : " << endl;
//         for(int i = 0; i <= 2; i++)
//         {
//             e[i].showEmp();
//         }
//     }
// };

// int main()
// {
//     Department D1;
//     D1.getDept();
//     D1.showDept();

//     return 0;
// }


class student
{
    int rollNo;
    string name;

    public:
    student(int r, string n) : rollNo(r), name(n) {}

    student(student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
    }

    void show()
    {
        cout << "Roll No. : " << rollNo << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    student s1(821, "Talha");
    s1.show();

    cout << "\n---------------------\n";

    student s2(s1);
    s2.show();
}


