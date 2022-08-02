#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }   
    }

    while(j < nums.size()) {
        nums[j++] = 0;
    }

    // for(auto x:nums) {
    //     cout << x << " ";
    // }

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

    moveZeroes(nums);

    return 0;
}