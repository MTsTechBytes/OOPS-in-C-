using namespace std;
#include <iostream>
#include <string>


class Teacher {
    private:
        double salary;

    public:
        //Parameterized Constructor
        Teacher(string n, string d, string s, double sal) { 
            name = n;
            department = d;
            subject = s;
            salary = sal; 
        }

        string name;
        string department;
        string subject;

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