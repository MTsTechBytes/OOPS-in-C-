using namespace std;
#include <iostream>
#include <string>

// 1.	Write an OOP program with a class name as ClassRoom. Class have some data members, all of type integer as, no_of_Fans, No_of_Chairs, No_of_tables, there are setdata() and getdata() functions in the class. There is a function which sets all the value of data members with some default value, there is another function which sets any 2 of the data members and last one sets the value of any single member of the class, there are total of 100 class rooms which didn't set the value for any of the data member. Your program also count the no of objects created by each constructor seperatly. Write the main fucntion as well to test the class.

class ClassRoom
{
    private:
    int nof, noc, noT;
    static int count1, count2, count3;

    public:
    ClassRoom() : nof(0), noc(0), noT(0) 
    {
        count1++;
    }

    ClassRoom(int f, int c) : nof(f), noc(c) 
    {
        count2++;
    }

    ClassRoom(int t) : noT(t) 
    {
        count3++;
    }
    
    void getData()
    {
        cout << "No of Fans : " << nof << endl;
        cout << "No of Chairs : " << noc << endl;
        cout << "No of Tables : " << noT << endl;
    }

    static void showCount()
    {
        cout << "Objects called by Default Constructor : " << count1 << endl;
        cout << "Oblects called by Two Parameter Constructor : " << count2 << endl;
        cout << "Objects called by One Parameter Constructor : " << count3 << endl;
    }
};

int ClassRoom :: count1 = 0;
int ClassRoom :: count2 = 0;
int ClassRoom :: count3 = 0;

int main()
{
    ClassRoom c[100];           // Default
    
    ClassRoom c1(19, 39);   //2 parameter
   
    ClassRoom c(23);       //1 parameter


    ClassRoom::showCount();
}