// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
    
//     vector<int> ans;

//     for(int i = 0, j = i + 1; i < nums.size()-1; i++) {
//         if(nums[i] + nums[j] == target) {
//             ans.push_back(i);
//             ans.push_back(j);
//             break;
//         }
//     }

//     return ans;

// }

// int main() {
//     vector<int> nums;
//     vector<int> ans;

//     int n, target;
//     cin >> n >> target;

//     int val;
//     for(int i = 0; i < n; i++) {
//         cin >> val;
//         nums.push_back(val);
//     }

//     ans = twoSum(nums, target);

//     for(auto x:ans) {
//         cout << x << " ";
//     }
//     return 0;
// }


#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {

    unordered_set<int> set;
    // insert operation 
    set.insert(5);
    set.insert(10);
    set.insert(3);

    // search operation
    if(set.find(11) == set.end()) {
        cout << "Not Found..." << "\n";
    }
    else {
        cout << "Found..." << "\n";
    }


    for(auto it = set.begin(); it != set.end(); it++) {
        cout << *it << " ";
    }


    return 0;
}