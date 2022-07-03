#include <iostream>
#include <vector>

using namespace std;

// brute force approch
vector<int> firstAndLast(vector<int>& arr, int t) {
    vector<int> res;
    int firstIndex = -1, secondIndex = -1;
    int count = 0;
    for(int i = 0; i < arr.size(); i++) {
        if (t == arr[i] && count == 0) {
            firstIndex = i;
            count++;
        }
        else if(t == arr[i] && count > 0) {
            secondIndex = i;
            count++;
        }
    }
    
    if (count == 0) {
        res.push_back(firstIndex);
    }
    else if(count == 1) {
        res.push_back(firstIndex);
        res.push_back(firstIndex);
    }
    else {
        res.push_back(firstIndex);
        res.push_back(secondIndex);    
    }
    
    
    return res;
}

int main() {
    int n, t;
    cin >> n >> t;
    
    vector<int> arr;
    vector<int> ans;
    int val;
    for(int i = 0;i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }
    
    ans = firstAndLast(arr, t);
    
    for(auto x:ans) {
        cout << x << " ";
    }
    
    return 0;
}
