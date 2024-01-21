#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b=temp;
}

int main()
{
    int x = 10, y = 20;
    cout<<"\nBefore Swapping : x = "<<x<<" y = "<<y<<"\n";

    swap(&x, &y); // call by reference
    cout<<"\nAfter Swapping : x = "<<x<<" y = "<<y<<"\n";

    return 0;
}