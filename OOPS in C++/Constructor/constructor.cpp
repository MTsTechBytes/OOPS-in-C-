using namespace std;
#include <iostream>
#include <string>

//Constructor 
// A Constructor is a special type of member function that initializes an object automatically when it is created.
// Special method invoked automatically at the time of object creation. Used for Initialisation.

//-> Constructor have the same name as that of the class.
//-> Constructor have no return type (not even void).
//-> Constructos is always public.
//-> Only called once (automatically), at object creation.
//-> Memory allocation happens when constructor is called.


class Teacher {
    private:
        double salary;

    public:

        //Creating a constructor
        Teacher() { 
            cout << "Hi, I am constructor\n";
            department = "Computer Science";   //Default value at starting would be Computer Science 
        }

        string name;
        string department;
        string subject;

    public:
        void changeDepartment(string newDepartment) {
            department = newDepartment;
        }

    public:
        void setSalary(double newSalary)
        {
            salary = newSalary;
        }

        double getSalary() {
            return salary;
        }
};




int main()
{
    Teacher t1;  //Constructor Call
    Teacher t2;  //Constructor Call 2nd time

    t1.name = "John";
    //t1.department = "Math";
    t1.subject = "Algebra";

    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.department << endl;
    cout << t1.getSalary() << endl;

    t1.changeDepartment("Physics");

    return 0;
}