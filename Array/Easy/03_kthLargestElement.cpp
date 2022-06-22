#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }
    
    cout << findKthLargest(nums, k) << " ";
    return 0;
}