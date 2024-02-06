// when the numbers to be sorted are uniform.

#include<iostream>
#include<vector>
using namespace std;

void bucketSort(float arr[], int size){
    vector<vector<float>> bucket (size, vector<float>());

    //inserting elements into bucket
    for (int i=0; i<size; i++){
        int index = arr[i]*size;
        bucket[index].push_back(arr[i]);
    }

    //sorting individual buckets
    int k=0;
    for (int i=0; i<size; i++){
        for (int j=0; j<bucket[i].size(); j++){
            arr[k++] = bucket[i][j];
        }
    }
}

int main()
{
    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.35, 0.85};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"\nOriginal array is : ";
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    bucketSort(arr, size);

    cout<<"\nSorted array is   : ";
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl<<endl;

    return 0;
}