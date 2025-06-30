#include<iostream>
using namespace std;
template<class T>
class stack 
{
	T arr[10];
	int top;
    public:
	    stack() :top(-1) {}

	    void push(int v) 
        {
		    arr[++top] = v;  //20(0) //30(1) //40(2)
	    }
	    T pop() 
        {
		    return arr[top--]; //top = 1
	    }
	    void display() 
        {
            for (int i = 0; i < 10; i++)
            {
                int x=top;
                cout << arr[i] << endl;
                x++;
            }
	    }
};
int main() 
{
	stack<int> s;
	s.push(20);
	s.push(30);
	s.push(40);
	cout << endl;
	cout << s.pop(); //40
	cout << endl;
	s.push(50);
	cout << endl;
    cout << s.pop(); //50
    cout << endl << endl << "Stack elements are:" << endl;
	s.display();
}