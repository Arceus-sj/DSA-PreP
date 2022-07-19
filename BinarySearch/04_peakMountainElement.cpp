#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int res = 0;
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end-start)/2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
            res = mid;
            break;
        }
        else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]) {
            start = mid+1;
        }
        else if(arr[mid]) {
            
        }
    } 
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    int val;
    for(int i=0;i<n;i++) {
        cin >> val;
        arr.push_back(val);
    }

    cout << peakIndexInMountainArray(arr) << "\n";
    return 0;
}