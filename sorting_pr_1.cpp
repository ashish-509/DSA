// Q) Given an integer array arr, move all zeros to end of it while maintaining the relative order of non zero elements.



#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "\nEnter the number of array elements : ";
    cin >> size;

    int arr[size];

    cout << "\nEnter " << size << " elements of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Move non-zero elements to the front of arr
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
/*  
    j=2, i=5
    0 1 0 3 0 5
    1 0 0 3 0 5
    1 3 0 0 0 5
    1 3 5 0 0 0 

*/
    }

    cout << "\nThe manipulated array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
