// Repeatedly find the smallest element in unsorted array and place it at the beginning of unsorted array  until array is sorted. 

// selection sort is an example of unstable sorting algorithm (might distrub the order of elements with same value)

// maximum number of swaps in selection sort is O(n)

// Time Complexity  : O(n2)
// Space Complexity : O(1)

#include<iostream>
#include<vector>
using namespace std;

void selectionSort (vector <int> &v){
    int n = v.size();

    for (int i=0; i<n-1; i++){
        int min_index = i;
        for (int j=i+1; j<n; j++){
            if (v[j] < v[min_index]){
                min_index = j;
            }
        }
        if (min_index != i){
            swap(v[min_index], v[i]);
        }
    }
}

int main()
{
    int n;
    cout<<"\nEnter the number of elements : ";
    cin>>n;

    vector <int> v(n);

    cout<<"\nEnter the "<<n<<" elements of an array : ";
    for (int i=0; i<n; i++){
        cin>>v[i];
    }

    selectionSort(v);

    cout<<"\nThe elements of sorted array are : ";
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}