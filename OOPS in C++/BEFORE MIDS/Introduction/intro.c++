using namespace std;
#include <iostream>
#include <string>

//Classes and Objects
//->objects are entities in the real world
//->class is like a blueprint of these entities


//Access Modifiers
//->private: data and methods accessible inside class, not accessible from outside the class
//->public: data and methods accessible to everyone, accessible from outside the class
//->protected: data and methods accessible inside class and to its derived class, accessible from outside the class but only in
//             inherited classes

class Teacher {
    //Properties or Attributes
    private:
        double salary;

    public:
        string name;
        string department;
        string subject;

    //Methods
    public:
        void changeDepartment(string newDepartment) {
            department = newDepartment;
        }

    //Making salary public using a method
    public:
        //setter
        void setSalary(double newSalary)
        {
            salary = newSalary;
        }

        //getter function : is generally used to get value of private member
        double getSalary() {
            return salary;
        }
};




int main()
{
    Teacher t1;
    t1.name = "John";
    t1.department = "Math";
    t1.subject = "Algebra";
    //t1.salary = 50000; // can't access salary as it is private
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    t1.changeDepartment("Physics");

    return 0;
}