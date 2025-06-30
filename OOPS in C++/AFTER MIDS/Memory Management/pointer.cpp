using namespace std;
#include <iostream>
#include <string.h>

int main()
{
    // int arr[3] = {10, 20, 30};
    // int * ptr;
    // ptr = arr;

    // for(int i = 0; i<= 2; i++)
    // {
    //     cout << "Address of arr[" << i << "] = ";
    //     cout << (ptr+i) << endl;

    //     cout << "Value of arr[" << i << "] = ";
    //     cout << *(ptr+i) << endl;
    // }

    // cout << "---------------------------------------------------------------------------------------------------------\n";

    // int *ptr2 = NULL; //0
    // cout << ptr2 << endl;
    // ptr2 = new int;
    // cout << ptr2 << endl;
    // *ptr2 = 22;
    // cout << *ptr2 << endl;
    // delete ptr2;

    // cout << "Address = " << ptr2 << endl;
    // cout << "Value = " << *ptr2 << endl;


    cout << "---------------------------------------------------------------------------------------------------------\n";
    char name[] = "Pakistan Zindabad";
    
    int slen = strlen(name);
    char *ptr3;
    ptr3 = new char(slen + 1);

    
    for (int i = 0; i <= slen; i++)
    {
        cin >> ptr3[i];
    }

    cout << "\n";

    for (int i = 0; i <= slen; i++)
    {
        cout << ptr3[i] << " ";
    }
    delete ptr3;



    return 0;
}