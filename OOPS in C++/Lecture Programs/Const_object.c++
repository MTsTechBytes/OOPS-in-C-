using namespace std;
#include <iostream>
#include <conio.h>

class Distance 
{
    int feet;
    float inches;

    public:


        // Distance ()                              this syntax is only for simple object like d1,d2
        // {
        //     feet = 0;
        //     inches = 0;
        // }

        Distance () : feet(5), inches(11.4) {}     // this syntax is for both simple object (d1 and d2) and constant object (d3)
        
        void input()
        {
            cout << "Enter in feets : ";
            cin >> feet;

            cout << "Enter in inches : ";
            cin >> inches;

            cout << "\n------------------------\n";
        }

        void output() const
        {
            cout << "Feet : " <<feet << "\nInches : " << inches << endl;

            cout << "\n------------------------\n";
        }
};

int main()
{
    Distance d1, d2;

    //constant object can only call constant function but
    // constant function can be called by both constant and simple objects
    const Distance d3;

    d1.input();
    d2.input();

    d1.output();
    d2.output();  //constant function is being called by simple object
                                                                                

    d3.output();  //constant object is calling constant function


    return 0;
}