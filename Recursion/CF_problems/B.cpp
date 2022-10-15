#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
	// base case 
	if(n < 1) 
		return;

	solve(n-1);

	cout << n << "\n";
}

int main() {

	int n; cin >> n;

	solve(n);	
	return 0;
}