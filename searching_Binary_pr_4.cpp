// Find the smallest element in rotated sorted array provided that all the elements in the array are unique

#include <iostream>
#include <vector>

using namespace std;

int findSmallestElement(vector<int> &nums){
    if (nums.size() == 1) return nums[0]; // only one element

    int left = 0, right = nums.size() - 1;

    if (nums[left] < nums[right]) return nums[0];
    while (left < right){
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[right]){
            right = mid;
        }
        else{ 
            left = mid + 1;
        }
    }
    return nums[left];
}

int main()
{
    vector<int> rotatedArray = {4, 5, 6, 7, 9, 1, 2};

    cout << "\nThe smallest element in the rotated sorted array is: " << findSmallestElement(rotatedArray) << endl
         << endl;

    return 0;
}
