/*
    Euclid's Algorithm : 
        If we subtract a smaller number from a larger one, the HCF of two numbers won't change.
        Also the HCF of smaller number and the larger % smaller (remainder) will be same.
*/


#include<iostream>
using namespace std;

int findHCF(int num1, int num2){
    if (num2>num1) return findHCF(num2,num1);
    if (num2 == 0) return num1;
    return findHCF(num2, num1%num2);
}

int main()
{
    int num1, num2;
    cout<<"\nEnter two numbers you want to find HCF of : ";
    cin>>num1>>num2;

    cout<<"\nThe HCF of "<<num1<<" and "<<num2<<" is : "<<findHCF(num1,num2)<<endl;

    return 0;
}