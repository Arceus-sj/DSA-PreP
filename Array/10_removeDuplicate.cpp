#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    int val;
    for(int i i =0;i<n;i++) {
        cin >> val;
        nums.push_back(val);
    }

    cout << removeDuplicates(nums) << "\n";
    return 0;
}