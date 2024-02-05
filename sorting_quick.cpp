// divide and conquer is used

// Worst case time complexity for quick sort will be O(n^2).
// Worst case space complexity for quick sort will be complexity is O(n) due to recursive calls.

// Quick sort is not a stable sorting algorithm.
// it is used in many inbuilt sorting algorithm
// quick sort is used for smaller datasets whereas merge sort is used for larger datasets.

#include <iostream>
using namespace std;

int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = first - 1; // for inserting elements < pivot
    for (int j = first; j < last; j++)
    { // for finding elements < pivot
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[last]); // placing pivot to i+1 index of array
    return i + 1;
}

void quickSort(int arr[], int first, int last)
{
    if (first >= last)
        return; // base case when the array has only 1 element.
    int pivot = partition(arr, first, last);
    quickSort(arr, first, pivot - 1);
    quickSort(arr, pivot, last);
}

int main()
{
    int size;
    cout << "\nEnter the number of elements in an array : ";
    cin >> size;

    int arr[size];
    cout << "\nEnter the " << size << " elements of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, size - 1);

    cout << "\nThe elements of sorted array are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}