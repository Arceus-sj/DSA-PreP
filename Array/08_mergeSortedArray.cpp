#include <iostream>
#include <vector>

using namespace  std;

void merge(vector<int>& nums1, int m, vector<int> nums2, int n) {
  
    for(int i = 0; i < n; i++) {
        nums1.push_back(nums2[i]);
    }

    
    
    for(auto x:nums1) {
        cout << x << " ";
    }

}

int main() {
    int n, m;
    cin >> m >> n;

    vector<int> nums1;
    vector<int> nums2;
    int val;

    for(int i = 0; i < m; i++) {
        cin >> val;
        nums1.push_back(val);
    }
    
    for(int i = 0; i < n; i++) {
        cin >> val;
        nums2.push_back(val);
    }

    merge(nums1, m, nums2, n);

    return 0;

} // namespace  std;
