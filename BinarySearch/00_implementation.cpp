#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& arr, int t) {
    int start = 0, end = arr.size() - 1;
    int result = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == t) {
            result = mid;
            break;
        }
        else if(arr[mid] > t) {
            start = mid + 1;
        }
        else if(arr[mid] < t) {
            end = mid - 1;
        }
    }

    return result;
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr;
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }

    cout << binarySearch(arr, x) << "\n";
    return 0;
}