#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> pairSum(vector<int>& arr, int s) {
    int n = arr.size();
    vector<vector<int>> res;
    for(int i = 0; i < n-1; i++) {
        vector<int> temp;
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == s) {
                if(arr[i] < arr[j]) {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    break;
                }
                else {
                    temp.push_back(arr[j]);
                    temp.push_back(arr[i]);
                    break;
                }
            }
        }

        res.push_back(temp);
        temp.clear();
    }

    return res;
}

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> arr;
    vector<vector<int>> ans;
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }

    ans = pairSum(arr, s);

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}