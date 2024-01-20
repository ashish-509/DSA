//CPP program to find sum of all digits of a number entered by user using recursion.

#include<iostream>
using namespace std;

int sumOfDigits(int number){
    if (number<=9 && number >=0)
        return number;
    else 
        return (sumOfDigits(number/10) + number%10);
}

int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;

    cout<<"Sum of digits of "<<number<<" is "<<sumOfDigits(number)<<endl;

    return 0;
}