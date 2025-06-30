using namespace std;
#include <iostream>

//A user wants to buy tiles for a room. The size of a single tile is "I feet 10 inches". User is asked for the length and width of a room in feet's and inches. If user enter negative value for feet or inches, an exception is thrown with that negative number and error string. How many tile will be required to cover the floor surface. Design an appropriate classes with required data members and member functions.

class Room
{
    public:
    float lengthInFeet, widthInFeet;

    Room() : lengthInFeet(0), widthInFeet(0) {}

    class Error
    {   
        public:
        int val1, val2;
        string statement;
        Error() : val1(0), val2(0), statement("") {}
        Error(int v1, int v2, string st) : val1(v1), val2(v2), statement(st) {}

        
    };

    void getInput()
    {
        int ft, in;
        cout << "Enter Room length (feet and inches) : ";
        cin >> ft >> in;
        if (ft < 0 || in < 0)
        {
            throw Error(ft, in, "Negative value is entered for room length");
        }
        lengthInFeet = ft + in/12.0;

        cout << "Enter Room Width (feet and inches) : ";
        cin >> ft >> in;
        if (ft < 0 || in < 0)
        {
            throw Error(ft, in, "Negative value is entered for room Width");
        }
        widthInFeet = ft + in/12.0;
    }

    float getArea()
    {
        return lengthInFeet * widthInFeet;
    }

};

class Tile
{
    public:
    float sizeInFeet;

    Tile()
    {
        sizeInFeet = 1 + 10/12.0 ;
    }

    float getArea()
    {
        return sizeInFeet * sizeInFeet;
    }
};

int main()
{
    try
    {
        Room r;
        Tile t;

        r.getInput();
        float roomArea = r.getArea();
        float tileArea = t.getArea();

        int tilesNeeded = roomArea/tileArea;
        
        cout << "\n Room Area: " << roomArea << " square feet\n";
        cout << "\n Single Tile Area: " << tileArea << " square feet\n";
        cout << "Total Tiles Required: " << tilesNeeded << endl;
    }

    catch(Room :: Error e)
    {
        cout << e.statement <<"\n Feet : " << e.val1 << "\n Inches : " << e.val2 << endl;
    }
    
    
}