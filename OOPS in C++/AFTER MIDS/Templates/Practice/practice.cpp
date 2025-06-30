#include <iostream>
using namespace std;

// Define a sample class 'temp'
class temp {
public:
    void show() const {
        cout << "Inside class temp" << endl;
    }
};

// Define a class template 'Test'
template <class T>
class Test {
public:
    T obj;  // object of template type

    void display() {
        obj.show();  // call method of type T
    }
};

int main() {
    Test<temp> t;   // t is an object of Test instantiated with class temp
    t.display();    // call the display function
}
