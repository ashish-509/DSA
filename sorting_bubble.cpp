// Repeatedly swap two adjacent elements if they are in wrong order.

// Bubble sort is a stable sorting algorithm (does not distrub the order of elements with same value)

// Time Complexity  : O(n2)
// Space Complexity : O(1)

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector <int> &v){
    int n = v.size();

    for(int i=0; i<n-1; i++){
        bool flag = false; // for optimization in terms of time complexity
        for(int j=0; j<n-(i+1); j++){
            if (v[j] > v[j+1]){
                flag = true; // if thre has been any swap in a pass the flag is set true
                swap(v[j], v[j+1]);
            }
            if (!flag) break; // if the flag is still false (no swap in a pass) then the array is already sorted. So break from the loop.
        }
    }
    return;
}

int main()
{
    int n;
    cout<<"\nEnter the number of elements : ";
    cin>>n;

    vector<int> v(n);
    cout<<"\nEnter "<<n<<" elements of an array : ";

    for (int i=0; i<n; i++){
        cin>>v[i];
    }

    bubbleSort(v);

    cout<<"\nThe sorted array is : ";
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 

    return 0;
}