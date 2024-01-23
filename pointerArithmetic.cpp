#include<iostream>
using namespace std;

int main()
{   
    int a = 10;
    int *p = &a;
    cout <<"p = "<< p << endl;

    cout <<"size of int = "<< sizeof(int) << endl;

    cout <<"p+1 = "<< p+1 << endl; // gives the  memory address of next location (for the case of interger it will be 4 bytes ahead.)

    cout<<"p+2 = "<< p+2 << endl; // gives the memory address of next next location (for the case of interger it will be 8 bytes ahead.)


    return 0;
}