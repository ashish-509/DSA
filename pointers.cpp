#include<iostream>
using namespace std;

int main()
{
    int x = 18;
    float y = 7.8;
    int z = 9;

    int *ptr1 = &x; //* is used only when declaring the pointer. It is not required when reassigning value to pointer.

    ptr1 = &z;      

    float *ptr2 = &y;
    int *ptr3;

    cout << ptr1 << " : " << *ptr1 <<endl; 
    cout << ptr2 << " : " << *ptr2 <<endl;  //0x7ffe5943a18c : 7.8
    // cout << ptr3 << " : " << *ptr3 <<endl;  //Segmentation fault (core dumped)
    

    *ptr1 = 50;  // updating value of variable with pointer.
    cout << ptr1 << " : " << *ptr1 <<endl; 
    cout<<z<<endl;


    return 0;
}