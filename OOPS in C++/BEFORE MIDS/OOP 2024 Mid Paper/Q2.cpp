using namespace std;
#include <iostream>
#include <string>

class Customer
{
    int cID;
    string cName;
    static int count;

    public:
    Customer() : cID(0), cName(" ") 
    {
        count++;
    }

    void display() const
    {
        cout << "Customer ID : " << cID << endl;
        cout << "Customer Name : " << cName << endl;
    }
    friend class Admin;
};

int Customer :: count = 0; 

class Admin
{
    public:
    void store(Customer &c)
    {
        c.cID = 101;
        c.cName = "John";
    }

    void Delete(Customer &c)
    {

    }

    void update(Customer &c)
    {

    }

    void getTotal(Customer c)
    {
        cout << "Total : " << c.count << endl;
    }
};

int main()
{
    Customer c1;    //
    Admin a1;
    a1.store(c1); // 
    a1.Delete(c1);
    a1.update(c1);

   a1.getTotal(c1);

    return 0;
}

