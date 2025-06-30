using namespace std;
#include <iostream>
#include <string>

//"this" pointer
//"this" is a special pointer in C++ that points to the current object.

class Teacher {
    private:
        double salary;

    public:

        string name;
        string department;
        string subject;

        Teacher(string name, string department, string subject, double salary) { 
            
            //
            this->name = name;              //this->name is same as *(this).name
            this->department = department;
            this->subject = subject;
            this->salary = salary; 
        }

        

    public:
        void getInfo() {
            cout << "Name : " << name << endl;
            cout << "Department : " << department << endl;
            cout << "Subject : " << subject << endl;
            cout << "Salary : " << salary << endl;
        }
};




int main()
{
    Teacher t1("Joel", "Computer Science", "C++", 30000);

    t1.getInfo();

    return 0;
}