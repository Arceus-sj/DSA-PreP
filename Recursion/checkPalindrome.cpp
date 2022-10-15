#include <iostream>
#include <string>

using namespace std;

bool solve(int i, string s) {
	int n = s.length();
	// base case
	if(i >= n/2)
		return true;

	// rr
	if(s[i] == s[n-i-1])
		return solve(i+1, s);

	return false;
}

int main() {
	string s;
	getline(cin, s);

	cout << boolalpha << solve(0, s) << "\n";
	return 0;	
}