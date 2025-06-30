using namespace std;
#include <iostream>
#include <string>

// class test
// {
//     int count;
//     public:
//     test() : count(0) {}

//     void operator ++ ()
//     {
//         ++ count;
//     }

//     test operator ++ (int)
//     {
//         test t1;
//         t1.count = ++count;
//         return t1;
//     }


//     void display()
//     {
//         cout << count << endl;
//     }

// };

// int main()
// {
//     test t1, t2, t3;
//     ++t1;
//     t2++;
//     t1.display();
//     cout << endl;
//     t2.display();
//     t3 = t2++;

//     t3.display();
    
    
//     return 0;
// }



// SUBSCRIPT OPERATOR OVERLOADING

// class Marks
// {
//     int subjects[5];
//     public:
//     Marks(int m1, int m2, int m3, int m4, int m5)
//     {
//         subjects[0] = m1;
//         subjects[1] = m2;
//         subjects[2] = m3;
//         subjects[3] = m4;
//         subjects[4] = m5;
//     }

//     int operator [] (int position)
//     {
//         return subjects[position];
//     }

// };

// int main()
// {
//     Marks a1(19, 25, 53, 64, 98);

//     cout << a1[0];

//     return 0;

// }





// FUNCTION CALL OPERATOR
// class Test
// {
//     private:
//     int value;
//     public: 
//     Test (int v) : value(v) {}

//     int operator () (int k)
//     {
//         return value*k;
//     }
// };

// int main()
// {
//     Test t(10);
//     cout << t(5) << endl;  // CAlls the object like a function
//     cout << t(10) << endl;

//     return 0;
// }



// ASSIGNMENT OPERATOR OVERLOADING
// class Number
// {
//     int value;

//     public:
//     Number() : value(0) {}
//     Number (int v) : value(v) {}

//     int operator = (Number other)
//     {
//         value = other.value;
//         return value;
//     }



//     void display()
//     {
//         cout << value << endl;
//     }
// };

// int main()
// {
//     Number n1(22);
//     Number n2;

//     n2 = n1;

//     n2.display();
// }





// STREAM INSERTION AND EXTRACTION OPERATOR OVERLOADING

class Person {
    private:
        string name;
        int age;
    
    public:
        // Constructor
        Person() : name(""), age(0) {}
    
        // Friend function to overload >>
        friend istream& operator>>(istream& in, Person& p);
    
        // Friend function to overload <<
        friend ostream& operator<<(ostream& out, const Person& p);
    };
    
    // Overload >> to input Person data
    istream& operator>>(istream& in, Person& p) {
        cout << "Enter name: ";
        in >> p.name;
        cout << "Enter age: ";
        in >> p.age;
        return in;
    }
    
    // Overload << to output Person data
    ostream& operator<<(ostream& out, const Person& p) {
        out << "Name: " << p.name << ", Age: " << p.age;
        return out;
    }

int main() {
    Person p;

    // Input using overloaded >>
    cin >> p;

    // Output using overloaded <<
    cout << p << endl;

    return 0;
} 


