#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int i, vector<int>& arr) {
	int n = arr.size();

	// base case
	if(i >= n/2) 
		return;

	swap(arr[i], arr[n-i-1]);

	// rr
	return solve(i+1, arr);
}

int main() {
	int n; cin >> n;

	vector<int> arr;
	int val;
	for(int i = 0; i < n; i++) {
		cin >> val;
		arr.push_back(val);
	}

	solve(0, arr);


	for(auto x:arr)
		cout << x << " ";
	return 0;
}