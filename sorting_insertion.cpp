// Repeatedly take elements from unsorted subarray & insert in sorted subarray.

// Insertion is a stable sorting algorithm (does not distrub the order of elements with same value)

// Time Complexity  : O(n2)
// Space Complexity : O(1)


#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int size;
    cout << "\nEnter the size of the array : ";
    cin >> size;

    vector<int> arr(size);
    cout << "\nEnter "<<size<<" elements of the array : ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "\nOriginal array : ";
    for (int num : arr) {
        cout << num << " ";
    }

    insertionSort(arr);

    cout << "\nSorted array   : ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout<<endl;

    return 0;
}
