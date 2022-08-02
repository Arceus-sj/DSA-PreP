#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    vector<int> sortedColors;
    int zeros = 0, ones = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == 0) 
            zeros++;
        else if(nums[i] == 1)
            ones++;
    }
    for(int i = 0; i < zeros; i++) {
        sortedColors.push_back(0)
    }
    for(int i = zeros-1; i < zeros+ones; i++) {
        sortedColors.push_back(1)
    }
    for(int i = (zeros+ones); i < n; i++) {
        sortedColors.push_back(2);
    }
    nums.clear();
    nums = sortedColors;
    sortedColors.clear();

    for(auto x: nums) {
        cout << x << " ";
    }
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

    sortColors(nums);
    return 0;
}