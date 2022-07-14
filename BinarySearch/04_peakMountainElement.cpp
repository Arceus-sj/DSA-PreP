#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    // brute force
    // int maxEl = INT_MIN;
    for(int i = 1; i < arr.size() - 1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) 
            return 1;
    }

    return 0;
} 

int main() {
    int n;
    cin >> n;

    vector<int> arr;
    int val;
    for(int i = 0;i < n;i++) {
        cin >> val;
        arr.push_back(val);
    }

    cout << peakIndexInMountainArray(arr) << "\n";

    return 0;
}