//Time Complexity: O(n log m) 
//where n is the number of books and m is the sum of all pages in the books
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int >& arr, int n, int m, int mid) {
    int studentsRequired = 1;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false;
        }

        if (currentSum + arr[i] > mid) {
            studentsRequired++;
            currentSum = arr[i];
        } else {
            currentSum += arr[i];
        }
    }

    return studentsRequired > m ? false : true;
}

int allocateBooks(vector<int >& arr, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int start = 0, end = sum;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if(isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }    
    return ans;
}
int main() {
    int n, m;
    cout << "Enter the number of books: ";
    cin >> n;
    cout << "Enter the number of students: ";
    cin >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout<< "Enter the number of pages in book " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout <<"The minimum number of pages that can be allocated to each student is: " << allocateBooks(arr, n, m) << endl;
    return 0;
}