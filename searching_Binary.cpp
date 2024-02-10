#include <iostream>  //binary search implemented on array sorted by merge sort.
using namespace std;

int binarySearch(int arr[], int value, int left, int right){
    // int mid = (left+right)/2; // to prevent overflow when low and high are both extremely large values.
    int mid = left + (right-left)/2;
    if (left>right) return -1;
    if (arr[mid] == value) return mid;
    else if (arr[mid] > value){
        return binarySearch(arr, value, left, mid-1);
    }
    else{
        return binarySearch(arr, value, mid+1, right);
    }
    return -1;
}

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *a = new int[n1];
    for (int i = 0; i < n1; i++){
        a[i] = arr[left + i];
    }
    int i = 0, j = mid + 1, k = left;

    while (i < n1 && j <= right){
        if (a[i] <= arr[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = arr[j++];
        }
    }

    while (i < n1){
        arr[k++] = a[i++];
    }

    delete[] a;
}

void mergeSort(int arr[], int left, int right){
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    int size, value;
    cout << "\nEnter the size of array : ";
    cin >> size;
    int arr[size];

    cout << "\nEnter " << size << " elements of an array : ";

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, size - 1);

    cout << "\nThe elements of sorted array are : ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout<<"\nEnter the element to be searched : ";
    cin>>value;
    cout<<value<<" is at index : "<<binarySearch(arr, value, 0, size-1)<<endl;

    return 0;
}