#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int maxSubarraySum(vector<int>& arr, int n) {
    long long int maxSum = INT_MIN;
    long long int currentSum = 0;

    for(int i = 0; i < n; i++) {
        currentSum += arr[i];

        maxSum = max(maxSum, currentSum);

        // if current sum become negetive then this condition applies
        if(currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr;
    int val;
    for(int i = 0; i < n; i++) {
        cin >>val;
        arr.push_back(val);
    }

    cout << maxSubarraySum(arr, n) << "\n";
    return 0;
}