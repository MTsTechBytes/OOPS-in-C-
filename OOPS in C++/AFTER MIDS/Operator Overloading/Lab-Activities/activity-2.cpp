//LAB 7
// Activity 2: Define a counter that counts the number of student while entering or leaving the lab. On entry the count should get incremented and on exit should be decremented. Total number of students present in the lab can also be displayed. 

using namespace std;
#include <iostream>
#include <conio.h>

class StdCounter
{
    private:
        int count;
    
    public:
        StdCounter() : count(0) {}

        StdCounter operator++()
        {
            ++count;
            cout << "Student entered" << endl;
            //cout << "Total students in lab: " << count << endl;
        }

        StdCounter operator--()
        {
            if (count > 0)
            {
                --count;
                cout << "Student left" << endl;
                //cout << "Total students in lab: " << count << endl;
            } 
            else
            {
                cout << "No students in the lab." << endl;
            }
        }

        void display()
        {
            cout << "Current number of students in the lab: " << count << endl;
        }
};

int main()
{
    StdCounter std;

    int choice;

    while (true) 
    {
        cout << "1. Student enters the lab\n";
        cout << "2. Student leaves the lab\n";
        cout << "3. Display current count of students\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                ++std;  // student enters
                break;
            case 2:
                --std;  // student leaves
                break;
            case 3:
                std.display();
                break;
            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}