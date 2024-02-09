//WAP to find kth smallest element in an array using quicksort.

#include<iostream>
using namespace std;


int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = first; // for inserting elements < pivot
    for (int j = first; j < last; j++)
    { // for finding elements < pivot
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[last]); // placing pivot to i index of array
    return i;
}


int kthSmallest(int arr[], int first, int last, int value){
    if (value > 0 && value <= last-first+1){
        int position = partition(arr, first, last); // position of pivot element
        if (position-first == value-1){
            return arr[position];
        }
        else if (position-first > value-1){
            return kthSmallest(arr, first, position-1, value);
        }
        else {
            return kthSmallest(arr, position+1, last, value-position+first-1);
        }
    }
    return 0;
}



int main()
{
    int size, value, index;
    cout << "\nEnter the number of elements in an array : ";
    cin >> size;

    int arr[size];
    cout << "\nEnter the " << size << " elements of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"\nEnter value of k for searching kth smallest element : ";
    cin>>value;

    index = kthSmallest(arr, 0, size, value);

    cout << "\nThe elements of sorted array are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"\nThe "<<value<<"th smallest element is : "<<index<<endl;

    return 0;
}