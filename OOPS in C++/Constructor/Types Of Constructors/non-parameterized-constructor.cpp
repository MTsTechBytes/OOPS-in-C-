using namespace std;
#include <iostream>
#include <string>


class Teacher {
    private:
        double salary;

    public:
        //Non-Parameterized Constructot
        Teacher() { 
            cout << "Hi, I am constructor\n";
            department = "Computer Science"; 
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
    Teacher t1;  
    Teacher t2;  

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