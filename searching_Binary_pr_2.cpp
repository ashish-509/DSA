//find the square root of the given non-negative value x. Round it off to the nearest floor integer value

#include<iostream>
using namespace std;

int squareRoot(int number){
    int low =0, high = number, answer = -1;
    while (low <= high){
        int mid = low + (high-low)/2;
        if (mid*mid <= number){
            answer = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return answer;
}

int main()
{
    int number;
    cout<<"\nEnter the number : ";
    cin>>number;

    cout<<"\nThe square root of "<<number<<" rounded to nearest floor integer is : "<<squareRoot(number)<<endl; 

    return 0;
}