#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> res;

    sort(nums.begin(), nums.end());

    return res;
}

int main() {
    vector<int> nums;
    vector<int> ans;

    int n, target;
    cin >> n >> target;

    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }

    ans = twoSum(nums, target);

    for(auto x:ans) {
        cout << x << " ";
    }
    return 0;
}