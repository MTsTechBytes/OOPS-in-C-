using namespace std;
#include <iostream>
#include <string>

// class Employee
// {
//     protected:
//     const int salaryPerHour = 500;
//     float salary;
    
//     public:
//     virtual void calculatePay() {}
// };

// class SalariedEmployee : public Employee
// {
//     const int workingDays = 30;
//     const int workingHours = 8;
    
//     public:


//     void calculatePay() override
//     {
//         salary = workingDays * workingHours * salaryPerHour;
//         cout << endl << salary;
//     }
// };

// class HourlyEmployee : public Employee
// {
//     int hoursWorked;
    

//     public:
//     void calculatePay() override
//     {
//         cout << "Enter number of hours you have worked : ";
//         cin >> hoursWorked;
//         salary = hoursWorked * salaryPerHour;

//         cout <<endl <<salary;
//     }
// };

// class CommissionEmployee : public Employee
// {
//     float comm;
//     int days;
//     public:
//     void calculatePay() override
//     {
//         cout << "Enter your commission : ";
//         cin >> comm;
//         cout << "How many days you have worked : ";
//         cin >> days;
//         salary = days * 500 + (comm/100.0);
//         cout << endl << salary;
//     }
// };

// int main()
// {
//     Employee *ptr[3];
//     SalariedEmployee s1;
//     HourlyEmployee h1;
//     CommissionEmployee c1;

//     ptr[0] = &s1;

//     ptr[1] = &h1;

//     ptr[2] = &c1;

//     for ( int i = 0 ;  i <= 2 ; i++)
//     {
//         ptr[i]->calculatePay();
//         cout << endl;
//     }

//     return 0;

// }








// Base class
// class Vehicle {
//     public:
//         virtual void startEngine() const {
//             cout << "Starting generic vehicle engine." << endl;
//         }
    
//         virtual ~Vehicle() {}
//     };
    
//     // Derived class: Car
//     class Car : public Vehicle {
//     public:
//         void startEngine() const override {
//             cout << "Car engine started with key." << endl;
//         }
//     };
    
//     // Derived class: Truck
//     class Truck : public Vehicle {
//     public:
//         void startEngine() const override {
//             cout << "Truck engine roars to life with button." << endl;
//         }
//     };
    
//     // Derived class: Motorcycle
//     class Motorcycle : public Vehicle {
//     public:
//         void startEngine() const override {
//             cout << "Motorcycle engine starts with a kick." << endl;
//         }
//     };
    
//     int main() {
//         // Create individual vehicle objects
//         Car car;
//         Truck truck;
//         Motorcycle motorcycle;
    
//         // Array of base class pointers
//         Vehicle* vehicles[3];
    
//         // Assign addresses of derived objects to base class pointers
//         vehicles[0] = &car;
//         vehicles[1] = &truck;
//         vehicles[2] = &motorcycle;
    
//         // Polymorphic call to startEngine
//         for (int i = 0; i < 3; ++i) {
//             vehicles[i]->startEngine();  // Calls the correct overridden method
//         }
    
//         return 0;
//     }









// Base class
// class account
// {
// protected:
// 	static int totalamount;
// 	int depositmoney;
// 	int withdrawmoney;
// public:
// virtual void CalculateInterest()  {
// 	cout << "Calculating interest for generic account.";
// 	}
// };
// class SavingsAccount :public account {
// public:
// 	SavingsAccount() {
// 		totalamount++;
// 	}
// 	void CalculateInterest() override {
// 		cout << "How many amount do you want to depsit\n";
// 		cin >> depositmoney;
// 		totalamount = totalamount + depositmoney;
// 		/*cout << "How many amount do you want to withdraw \n ";
// 		cin >> withdrawmoney;
// 		totalamount -= withdrawmoney;*/
// 	}
// };
// class CurrentAccount :public account {
// public:
	
// 	void CalculateInterest() override{
// 		cout << "This displays the total money money in account\n ";
// 		cout << totalamount;
// 	}
// };
// int account::totalamount = 25000;

// int main() {
// 	account* ptr [2];
// 	SavingsAccount sv;
// 	CurrentAccount ca;
// 	ptr[0] = &sv;
// 	ptr[1] = &ca;
// 	for (int i = 0; i < 2; i++)
// 	{
// 		ptr[i]->CalculateInterest();
// 	}

// }   














#include <iostream>
using namespace std;

class employee {
protected:
    static int no_of_days;
    int workinghours = 8;
    static int perhour;
public:
    virtual void calculatesalary() {
        cout << "Calculate salary for a generic employee\n";
    }

    virtual ~employee() {} 
};

int employee::no_of_days = 30;
int employee::perhour = 500;

class fulltime_employee : public employee {
protected:
    int sal_of_ftemp;
public:
    void calculatesalary() override {
        sal_of_ftemp = no_of_days * workinghours * perhour;
        cout << "Salary of full-time employee is: " << sal_of_ftemp << endl;
    }
};

class parttime_employee : public employee {
protected:
    int sal_of_ptemp;
public:
    void calculatesalary() override {
        int parttime_hours = 4; 
        sal_of_ptemp = no_of_days * parttime_hours * perhour;
        cout << "Salary of part-time employee is: " << sal_of_ptemp << endl;
    }
};

class contract_employee : public employee {
protected:
    int sal_of_ctemp;
    int contract_days; 
public:
    void calculatesalary() override {
        cout << "Enter number of days worked as contract employee: ";
        cin >> contract_days;
        sal_of_ctemp = workinghours * contract_days * perhour;
        cout << "Salary of contract employee is: " << sal_of_ctemp << endl;
    }
};

int main() {
    employee* emp[3];

    fulltime_employee femp;
    parttime_employee pemp;
    contract_employee cemp;

    emp[0] = &femp;
    emp[1] = &pemp;
    emp[2] = &cemp;

    for (int i = 0; i < 3; i++) {
        emp[i]->calculatesalary();
    }

    return 0;
}
    










