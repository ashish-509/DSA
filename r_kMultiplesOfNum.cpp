#include<iostream>
using namespace std;

void kMultiplesOfNum(int number, int k){
    if (k<=0){
        return;
    }
    kMultiplesOfNum(number,k-1);
    cout<<number*k<<" ";
}

int main()
{
    int number, k;
    cout<<"\nEnter the number : ";
    cin>>number;

    cout<<"\nEnter the no. of multiples k you want to print : ";
    cin>>k;

    cout<<"\nThe multiples of "<<number<<" upto "<<k<<" terms are : ";
    kMultiplesOfNum(number, k);
    cout<<endl; 

    return 0;
}