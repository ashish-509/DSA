#include<iostream>
using namespace std;

void process (int *arr, int size)
{
    *arr = 20; // this will change the value of the first element of the array.
    cout << endl << endl;
    for (int i = 0; i < size; i++)
    {
        cout<< "arr["<< i <<"] = "<< arr[i] << endl;
    }
}

int main()
{   
    int a[5] = {1,2,3,4,5};
    
    cout<< "a = "<< a << endl; // gives the memory address of the first element of the array.
    cout<< "&a[0] = "<< &a[0] << endl; // gives the memory address of the first element of the array.

    cout<<"*a = "<< *a << endl; // gives the value of the first element of the array.
    cout<<"*(a+1) = "<< *(a+1) << endl; // gives the value of the second element of the array.


    process(a, 5);

    cout << "\n\na[0] = "<< a[0] << endl; // this will print 20 as the value of the first element of the array is changed by the process function.


    return 0;
}