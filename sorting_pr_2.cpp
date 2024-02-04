// Q) Given an array of name of fruits, you are supposed to sort it in a lexicographical (alphabetical) order using SELECTION sort.

#include <iostream>
using namespace std;

void selectionSortFruits(string fruits[], int size)
{
    for (int i = 0; i < size - 1; i++)
    { // for traversal of whole array for sorting
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        { // for finding the minimum of unsorted array
            if (fruits[j] < fruits[min_index])
            {
                min_index = j;
            }
        }
        swap(fruits[i], fruits[min_index]);
    }
}

int main()
{
    int size;
    cout << "\nEnter the number of fruits : ";
    cin >> size;

    string fruits[size];

    cout << "\nEnter the " << size << " number of fruits : ";
    for (int i = 0; i < size; i++)
    {
        cin >> fruits[i];
    }

    selectionSortFruits(fruits, size);

    cout << "\nThe lexicographically sorted order of fruits is : ";
    for (int i = 0; i < size; i++)
    {
        cout << fruits[i] << " ";
    }
    cout << endl;

    return 0;
}