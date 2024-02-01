//This is the C++ program to find the sum till n but with alternate signs.
// Eg: 1-2+3-4+5-6+7-8......


#include<iostream>
using namespace std;

int altSignSum(int n){
    if (n<=0)return 0;
    return altSignSum(n-1) + (n % 2 == 0 ? (-n) : n);
}

int main()
{
    int n;
    cout<<"\nEnter a number : ";
    cin>>n;

    cout<<"\nThe sum up to "<<n<<" but with alternate sign is : " << altSignSum(n)<<endl;

    return 0;
}