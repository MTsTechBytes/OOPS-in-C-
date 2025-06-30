using namespace std;
#include <iostream>
#include <string>

//Copy Constructor
//Special Constructor (default) used to copy properties of one object into another


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

        //Copy Constructor
        Teacher(Teacher &orgObj) {
            cout << "I am custom copy constructor....\n";
            this->name = orgObj.name;              
            this->department = orgObj.department;
            this->subject = orgObj.subject;
            this->salary = orgObj.salary;
        }
        

    public:
        void getInfo() {
            cout << "Name : " << name << endl;
            cout << "Department : " << department << endl;
            cout << "Subject : " << subject << endl;
            cout << "Salary : " << salary << endl;
        }
};


//DEFAULT COPY CONSTRUCTOR
// class test
// {
//     int a, b;

//     public:
//     test (int x, int y) : a(x), b(y) {}
    
//     void display()
//     {
//         cout << a << "," << b << endl;
//     }
// };

// int main()
// {
//     test t1(1, 2);
//     t1.display();
//     test t2(t1);
//     t2.display();

//     return 0;
// }



int main()
{
    Teacher t1("Joel", "Computer Science", "C++", 30000);
    //t1.getInfo();

    //Teacher t2(t1);  //default copy constructor - invoked,  takes object as an argument and make a copy of it.
    Teacher t2(t1);    //custom copy constructor - invoked,
    t2.getInfo();


    return 0;
}

//A shallow copy of an object copies all of the member values from one object to another. All the Copy Constructors(Default or Custom) makes shallow copy.


//A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the members points to.