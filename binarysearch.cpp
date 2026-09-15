#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int st = 0;
    int end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2; //We do this to avoid integer overflow especially in coding websites

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            st = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}


int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target=12;
    vector<int> arr2={-1, 0, 3, 5, 9, 12};
    int target2=0;
    cout<<"Binary Search in arr1: "<<binarySearch(arr1, target)<<endl;
    cout<<"Binary Search in arr2: "<<binarySearch(arr2, target2)<<endl;
    return 0;


}