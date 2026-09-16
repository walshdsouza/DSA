#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target, int st, int end) {
    if (st > end) {
        return -1; // Target not found
    }

    int mid = st + (end - st) / 2; //We do this to avoid integer overflow especially in coding websites

    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] < target) {
        return binarySearch(arr, target, mid + 1, end); // Search in the right half
    } else {
        return binarySearch(arr, target, st, mid - 1); // Search in the left half
    }
}

int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target=12;
    vector<int> arr2={-1, 0, 3, 5, 9, 12};
    int target2=0;
    cout<<"Binary Search in arr1: "<<binarySearch(arr1, target, 0, arr1.size() - 1)<<endl;
    cout<<"Binary Search in arr2: "<<binarySearch(arr2, target2, 0, arr2.size() - 1)<<endl;
    return 0;


}



