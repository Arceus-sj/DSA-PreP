#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 1; i++) {
        if(nums[i] == nums[i+1])
            return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }

    cout << containsDuplicate(nums) << "\n";
    return 0;
}