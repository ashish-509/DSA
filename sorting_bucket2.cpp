// when the numbers to be sorted are non uniform.

#include<iostream>
#include<vector>
using namespace std;

void bucketSort(float arr[], int size){
    vector<vector<float>> bucket (size, vector<float>());

    //finding range
    float maxElement = arr[0];
    float minElement = arr[0];
    for (int i=1; i<size; i++){
        maxElement = max(maxElement, arr[i]);
        minElement = min(minElement, arr[i]);
    }
    float range = (maxElement - minElement)/size;

    //inserting elements into bucket
    for (int i=0; i<size; i++){
        int index = (arr[i]-minElement)/range;
        //boundary elements
        float diff = (arr[i]-minElement)/range - index;
        if (diff == 0 && arr[i] != minElement){
            bucket[index-1].push_back(arr[i]);
        }
        else{
            bucket[index].push_back(arr[i]);
        }
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
    float arr[] = {0.13, 0.89, 5.75, 2.35, 10.85};
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