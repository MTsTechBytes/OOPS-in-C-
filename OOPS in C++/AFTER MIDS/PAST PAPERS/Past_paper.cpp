using namespace std;
#include <iostream>
#include <string>
#include <cmath>

// class Person
// {
//     string name;
//     string contact;

//     public:
//     Person() : name(""), contact(0) {}
//     Person(string n, string c) : name(n) , contact(c) {}

//     void input() {
//         cout << "Enter Name: ";
//         cin.ignore();
//         getline(cin, name);
//         cout << "Enter Contact: ";
//         getline(cin, contact);
//     }

//     void displayPerson()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Contact : " << contact << endl;
//     }
// };

// class Goat
// {
//     const int goats = 100;
//     int goatid;
//     float price;
//     int day;
//     int time;
//     Person p;

//     public:
//     void BookGoat()
//     {
//         cout << "\n GOAT BOOKING \n";
//         p.input();

//         cout << "Enter Goat Price : ";
//         cin >> price;

//         cout << "\nEnter Days (1-3) : ";
//         cin >> day;
//     }


// };

// class Cow
// {
//     int cows = 100;
//     const float price = 25000.0;
//     int cowID;
//     int day;
//     Person p[7];

//     public:
//     Cow() : cowID(0), day(0) {}

//     void BookCow()
//     {
//         cout << "\nCOW BOOKING\n";
//         for (int i = 0; i <= 6; i++)
//         {
//             p[i].input();
//             cout << endl;
//             --cows;
//         }

//         cout << "Enter Day (1 - 3): ";
//         cin >> day;
//     }

// };




//Q2

// class Point
// {
//     int x, y;
//     public:

//     Point(): x(0), y(0) {}
//     //Point(int p1, int p2) : x(p1), y(p2) {}

//     class Error
//     {
//         public:
//         string err;
//         int cor;

//         public:
//         Error() : err(""), cor(0) {}
//         Error(string e, int c) : err(e), cor(c) {}
//     };


//     void input()
//     {
//         cout << "Enter x-coordinates : ";
//         cin >> x;
//         if (x < 0)
//         {
//             throw Error("x-coordinate is negative", x);
//         }

//         cout << "\nEnter y-coordinates : ";
//         cin >> y;
//         if (y < 0)
//         {
//             throw Error("y-coordinate is negatice", y);
//         }
//     }

//     void display()
//     {
//         cout << "X-coordinates : " << x << endl;
//         cout << "Y-coordinates : " << y << endl;
//     }
// };

// int main()
// {
//     try
//     {
//         Point p;
//         p.input();
//     }
//     catch(Point :: Error e)
//     {
//         cout << "Error : " << e.err << e.cor;
//     }
    

// }

// Q3
// template<typename A, typename B, typename C>
// class Area {
// public:
//     A side1;
//     B side2;
//     C side3;
//     double s;

//     class Error {
//     public:
//         string error;
//         Error() : error("") {}
//         Error(string e) : error(e) {}
//     };

//     void semiperimeter() {
//         s = (side1 + side2 + side3) / 2.0;
//         cout << "Semiperimeter (s): " << s << endl;
//     }

//     double areacalculate() {
//         // Check if the sides can form a triangle
//         if (!((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))) {
//             throw Error("Invalid triangle sides: Cannot form a triangle.");
//         }

//         semiperimeter();  // Calculates s
//         double result = sqrt(s * (s - side1) * (s - side2) * (s - side3));
//         return result;
//     }
// };

// int main() {
//     Area<int, float, double> a1;
//     a1.side1 = 45;
//     a1.side2 = 7.8f;
//     a1.side3 = 23.67;

//     try {
//         double area_value = a1.areacalculate();
//         cout << "Area of triangle: " << area_value << endl;
//     } catch (Area<int, float, double>::Error e) {
//         cout << "Error: " << e.error << endl;
//     }

//     return 0;
// }





// Q4
class FeetInches
{
    int feet;
    float inches;
public:
    FeetInches() : feet(0), inches(0.0) {}
    FeetInches(int f, float i) : feet(f), inches(i) {}

    void show() const
    {   
        cout << "Feet: " << feet << ", Inches: " << inches << endl;
    }

    FeetInches operator=(FeetInches other)
    {
        feet = other.feet;
        inches = other.inches + 1.25; // Adding 1.25 inches to the inches of the other object
        return FeetInches(feet, inches);
    }
};

int main()
{
    FeetInches F1(9, 3.5);
    F1.show();
    
    FeetInches F2;
    F2 = F1;
    F2.show();
    return 0;
}







