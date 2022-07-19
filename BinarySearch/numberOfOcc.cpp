#include <iostream>
#include <vector>

using namespace std;

int numberOdOccurrences(vector<int> arr, int target) {
    int n = arr.size();
    int ans = 0;
    int firstOccIndex = 0;
    int lastOccIndex = 0;

    int start = 0, end = n - 1;
    // first occurrence
    while(start <= end) {
        int mid = start + (end-start)/2;

        if(arr[mid] == target) {
            if(arr[mid-1] == arr[mid]) {
                end = mid - 1;
            }
            else {
                firstOccIndex = i;
                break;
            }
        }

        else if(arr[mid] < target) {
            
        }


    }



    // second occurrence

    return ans;
}

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> arr;
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }

    cout << numberOdOccurrences(arr, target) << "\n";
    return 0;
}