using namespace std;
#include<iostream>

class Time {
    private:
        int hr, min, sec;

    public:
        void setData()
        {
            cout << "Enter hours : ";
            cin >> hr;
            cout << "Enter minutes : ";
            cin >> min;
            cout << "Enter seconds : ";
            cin >> sec;
        }

        void putData()
        {
            cout << hr << " Hours : " << min << " Minutes : " << sec << " Seconds" << endl; 
        }

        void add(Time t1, Time t2)
        {
            hr = t1.hr + t2.hr;
            min = t1.min + t2.min;
            sec = t1.sec + t2.sec; 
        }
};

int main()
{
    Time t1, t2, t3;

    t1.setData();
    t1.putData();

    t2.setData();
    t1.putData();

    t3.add(t1, t2);
    t3.putData();

    return 0;
}