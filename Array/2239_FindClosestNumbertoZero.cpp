#include <bits/stdc++.h>
using namespace std;

int findClosestNumber(vector<int>& nums) {
    if(nums.size() == 1)
        return nums[0];
    
    int small = nums[0];
    
    for(int i = 1; i < nums.size(); i++) {
        
        if(abs(small) >= abs(nums[i])) {
            
            if(abs(small) == abs(nums[i])) {
                if(small > nums[i])
                    small = small;
                else
                    small = nums[i];
                continue;
            }
            
            small = nums[i];
            
            
        }
    }
    
    return small;
    
}

int main() {
	// your code goes here
    
    vector<int> nums = {-1,-2,-3,-1,0};
    cout << findClosestNumber(nums) << "\n";
    return 0;
}
