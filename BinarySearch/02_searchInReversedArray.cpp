#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& arr, int t) {
    // naive approach
    // for(int i = 0; i < arr.size(); i++) {
    //     if(arr[i] == t)
    //         return i;
    // }
    // return -1;

    // binary search approach
    int res = -1;
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end) {
        int mid = start + (end-start)/2;

        if(arr[mid] == t) {
            res = mid;
            break;
        }
        else if(arr[mid] > t) {
            start = mid + 1;
        }
        else if(arr[mid] < t) {
            end = mid - 1;
        }
    }
    return res;
}

int main() {
    int n, t;
    cin >> n >> t;
    
    vector<int> arr;
    int val;
    for(int i = 0;i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }
    
   cout << search(arr, t) << "\n";
    
    return 0;
}
