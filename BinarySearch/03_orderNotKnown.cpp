#include <iostream>
#include <vector>
#include <string>

using namespace std;

string orderNotKnown(vector<int>& arr) {

    if (arr.size() == 1)
        return "only one element";
    else if(arr[0] < arr[1])
        return "increasing order";
    return "non-increasing order";
}

int main() {
    int n, t;
    cin >> n;
    
    vector<int> arr;
    int val;
    for(int i = 0;i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }
    
   string res = orderNotKnown(arr);

   cout << res << "\n";
    
    return 0;
}
