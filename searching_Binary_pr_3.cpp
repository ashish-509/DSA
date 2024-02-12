// Given an array of integers 'a' that is sorted in ascending order. Find the first and last position of given 'target' element in the sorted array. If tarhet is not found return [-1, -1]

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int value, int low, int high)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= value)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int lastOccurence(int arr[], int value, int low, int high)
{
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > value)
        {
            ans = mid-1;
            high = mid - 1; //discard right
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int size, element;
    cout << "\nEnter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "\nEnter the elements of an array in sorted order : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the element to be searched  : ";
    cin >> element;
    cout << "\nThe first and last occurence of " << element << " in provided array is : [" << firstOccurence(arr, element, 0, size - 1) << ", " << lastOccurence(arr, element, 0, size - 1) << "]" << endl;

    return 0;
}
