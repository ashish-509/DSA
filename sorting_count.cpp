// Time complexity : O(n)

// Count sort is stable sorting algorithm

// Count sort can not be used when we have to sort floating numbers as well

#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int> &v)
{
    int size = v.size();

    // for finding the maximum element
    int maxElement = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        maxElement = max(v[i], maxElement);
    }

    // creating the frequency array
    vector<int> frequency(maxElement + 1, 0);
    for (int i = 0; i < size; i++)
    {
        frequency[v[i]]++;
    }

    // calculating cumulative frequency
    for (int i = 1; i <= maxElement; i++)
    {
        frequency[i] += frequency[i - 1];
    }

    // finding sorted array
    vector<int> ans(size);
    for (int i = size - 1; i >= 0; i--)
    {
        ans[--frequency[v[i]]] = v[i];
    }

    // copy back the ans to the original array
    for (int i = 0; i < size; i++)
    {
        v[i] = ans[i];
    }
}

int main()
{
    int size;
    cout << "\nEnter the number of elements to be sorted: ";
    cin >> size;

    vector<int> v(size);
    cout << "\nEnter the " << size << " elements to be sorted: ";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    countSort(v);

    cout << "\nThe elements of the sorted array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
