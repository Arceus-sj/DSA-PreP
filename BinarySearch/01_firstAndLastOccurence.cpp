#include <iostream>
#include <vector>
#include <utility>

using namespace std;

// brute force approch
// vector<int> firstAndLast(vector<int>& arr, int k) {
//     vector<int> res;
//     int firstIndex = -1, secondIndex = -1;
//     int count = 0;
//     for(int i = 0; i < arr.size(); i++) {
//         if (k == arr[i] && count == 0) {
//             firstIndex = i;
//             count++;
//         }
//         else if(k == arr[i] && count > 0) {
//             secondIndex = i;
//             count++;
//         }
//     }
    
//     if (count == 0) {
//         res.push_back(firstIndex);
//     }
//     else if(count == 1) {
//         res.push_back(firstIndex);
//         res.push_back(firstIndex);
//     }
//     else {
//         res.push_back(firstIndex);
//         res.push_back(secondIndex);    
//     }
    
    
//     return res;
// }

pair<int, int> firstAndLast(vector<int>& arr, int n, int k) {
    pair<int, int> ans;
    int start = 0, end = n - 1;
    int firstOccurrence = -1, lastOccurrence = -1;
    
    // find the left or first occurence 
    while(start <= end) {
        int mid = start + (end-start)/2;

        if(arr[mid] == k) {
            firstOccurrence = mid;
            end = mid - 1;
        }
        else if(arr[mid] > k) {
            end = mid - 1;
        }
        else if(arr[mid] < k) {
            start = mid + 1;
        } 
    }

    // find the last most occurence
    start = firstOccurrence, end = n - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == k) {
            lastOccurrence = mid;
            start = mid + 1;
        }
        else if(arr[mid] > k) {
            end = mid - 1;
        }
        else if(arr[mid] < k) {
            start = mid + 1;
        } 
    }

    // cout << firstOccurrence << " " << lastOccurrence << "\n";
    ans.first = firstOccurrence;
    ans.second = lastOccurrence;

    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr;
    
    int val;
    for(int i = 0;i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }
    
    pair<int, int> ans = firstAndLast(arr, n, k);
    
    cout << ans.first << " " << ans.second << "\n";
    
    return 0;
}
