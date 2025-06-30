//LAB 7
// Activity 4: Binary/Arithematic Operator Overloading
// Modify the above program to subtract a smaller distance from the larger one using – operator.

using namespace std;
#include <iostream>
#include <conio.h>

class Distance
{
    private:
	    int feet;
	    float inches;
    public: 
	    Distance() : feet(0), inches(0.0) {}
	 
	    Distance(int ft, float in) : feet(ft), inches(in) {} 

        void getdist()
        {
            cout << "\nEnter feet : ";
            cin >> feet;
            cout << "Enter inches : ";
            cin >> inches;
        }

        void showdist() const
        {
            cout << feet << "\' - " << inches << "\"";
        }

        
        Distance operator + (Distance d2) const
        {
            int f = feet + d2.feet;
            float i = inches + d2.inches;
            if (i >= 12.0) 
            { 
                i -= 12.0; 
                f++; 
            } 
            return Distance(f, i); 
        }


        Distance operator - (Distance d2)
        {
            int f = feet - d2.feet;
            float i = inches - d2.inches;
            if (i >= 12.0) 
            { 
                i -= 12.0; 
                f++;
            }
            return Distance(f, i);
        }

        bool operator > (Distance d2) const
        {
            if(feet > d2.feet)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};



int main()
{
	Distance dist1, dist3;
	dist1.getdist();
	Distance dist2(11, 6.25);

	dist3 = dist1 + dist2;
	
    cout << "AFTER ADDITION" << endl;
	cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist2 = "; dist2.showdist(); cout << endl;
	cout << "dist3 = "; dist3.showdist(); cout << endl;

    if(dist1 > dist2)
    {
        dist3 = dist1 - dist2;
    }
    else
    {
        dist3 = dist2 - dist1;
    }


    cout << "---------------------------------------------------------" << endl;
    cout << "AFTER SUBTRACTION" << endl;
    cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist2 = "; dist2.showdist(); cout << endl;
	cout << "dist3 = "; dist3.showdist(); cout << endl << endl;


	return 0;
}

