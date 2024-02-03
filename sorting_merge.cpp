// time complexity of problems involving divide and conquer can be found by using master's theorem...

// merge sort is a stable sorting algorithm

// -> merge sort is used for sorting larger data sets and for sorting elements of linked lists

// -> Drawbacks of merge sort are: 
        // - slower for smaller tasks
        // - takes extra space of O(n) for new array
        // - goes through whole process even if the array is already sorted.

#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *a = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[left + i];
    }

    int i = 0, j = mid + 1, k = left;

    while (i < n1 && j <= right)
    {
        if (a[i] <= arr[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = arr[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = a[i++];
    }

    delete[] a;
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    int size;
    cout << "\nEnter the size of array : ";
    cin >> size;

    int arr[size];

    cout << "\nEnter " << size << " elements of an array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, size - 1);

    cout << "\nThe elements of sorted array are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}