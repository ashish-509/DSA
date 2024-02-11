//find the first occurence of given element x, given thet the array os sorted. If no occurence of x is found return -1.

#include <iostream> 
using namespace std;

int firstOccurence(int arr[], int value, int low, int high){
    int ans = -1;
    while (low <= high){
        int mid = low + (high-low)/2;
        if (arr[mid] == value){
            ans = mid;
            high = mid-1;
        }
        else if (arr[mid] < value){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main()
{
    int size, value;
    cout << "\nEnter the size of array : ";
    cin >> size;
    int arr[size];

    cout << "\nEnter " << size << " elements of an array in sorted manner : ";

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout<<"\nEnter the element to be searched : ";
    cin>>value;
    cout<<value<<" is at index : "<<firstOccurence(arr, value, 0, size-1)<<endl;

    return 0;
}