using namespace std;
#include <iostream>
#include <string>


// Encapsulation
// Encapsulation is wrapping up of data and member functions in a single unit called class.

// All the things that we have done in intro.c++ is called encapsulation

class Account {

    //Data Hiding : hiding sensitive information in private.
    private:
        double balance;
        string password;


    public:
    string accountID;
    string username;
};