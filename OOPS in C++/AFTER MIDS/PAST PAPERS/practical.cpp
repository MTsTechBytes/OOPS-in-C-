using namespace std;
#include <iostream>
#include <fstream>

//Q2

class Error
{
    public:
    string err;
    int cor;

    public:
    Error() : err(""), cor(0) {}

    Error(string e, int c) : err(e), cor(c) {}

    void logException()
    {
        ofstream fout("ExceptionReport.dat", ios::app);
        if (fout.is_open())
        {
            fout << "Error: " << err << ", Coordinate: " << cor << endl;
            fout.close();
        }
    }

    void analyzeException()
    {
        ifstream fin("ExceptionReport.dat");
        if (fin.is_open())
        {   
            string line;
            int total = 0, constructorCount = 0;
            while (getline(fin, line))
            {
                total++;
                if (line.find("Constructor") >= 0)
                {
                    constructorCount++;
                }
            }
            fin.close();
            cout << "Total exceptions logged: " << total << endl;
            cout << "Constructor exceptions: " << constructorCount << endl;
        }
    }
};

class Point
{
    int x, y;
    public:

    Point(): x(0), y(0) {}

    Point(int p1, int p2) : x(p1), y(p2) 
    {
        if (x < 0)
        {
            throw Error("Constructor-X x-coordinate is negative", x);
        }   
        if (y < 0)
        {
            throw Error("Constructor-X y-coordinate is negative", y);
        }
    }

    void input()
    {
        cout << "Enter x-coordinates : ";
        cin >> x;
        if (x < 0)
        {
            throw Error("Input-X x-coordinate is negative", x);
        }

        cout << "\nEnter y-coordinates : ";
        cin >> y;
        if (y < 0)
        {
            throw Error("Input-Y y-coordinate is negatice", y);
        }
    }

    void display() const
    {
        cout << "X-coordinates : " << x << endl;
        cout << "Y-coordinates : " << y << endl;
    }
};

int main()
{
    try
    {
        Point p(2, 3); // Using constructor
        p.display();

        p.input();
        p.display();
    }
    catch(Error e)
    {
        cout << "Error : " << e.err << e.cor;
        e.logException(); // Log the exception
        e.analyzeException(); // Analyze the exceptions
    }

}