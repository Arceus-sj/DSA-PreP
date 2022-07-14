#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
	sort(arr.begin(), arr.end());
	
	int uniqueEl = arr[0], count = 1;
	vector<int> res;
	int i = 1;
	while (i < arr.size() && i<arr.size()) {
		if(uniqueEl == arr[i]) {
			count++;
			// i++;
		}
		else {
			res.push_back(count);
			uniqueEl = arr[i];
			count = 1;
		}
		
		i++;
		
		
		// if i reach the end value
		if (i == arr.size()) {
			res.push_back(count);
			uniqueEl = arr[i];
			count = 1;

		}
	}
	
	arr.clear();
	
	for(auto x:res) {
		cout << x << " ";
	}
	return true;
}

int main () {
	int n;
	cin >> n;
	
	vector<int> arr;
	int val;
	for(int i=0;i<n;i++) {
		cin >> val;
		arr.push_back(val);
	}
	
	cout << boolalpha << uniqueOccurrences(arr) << "\n";
	return 0;
}