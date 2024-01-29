#include<iostream>
using namespace std;

int searchForX(int arr[], int x, int i=0){
    if (i == (sizeof(arr) / sizeof(arr[0]))) return -1;
    if (arr[i] == x) return i;
    return searchForX(arr, x, i+1);
}

int main()
{ 
    int size, arr[size], x;
    cout<<"\nEnter the size of an array : ";
    cin>>size;

    cout<<"\nEnter "<<size<<" elements of an array : ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"\nEnter element to be searched : ";
    cin>>x;

    cout<<"\nThe element "<<x<<" is at index : "<<searchForX(arr, x)<<endl;


    return 0;
}