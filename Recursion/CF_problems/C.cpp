#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
	// base case
	if(n < 1)
		return;

	if(n == 1)
		cout << n;
	else
		cout << n << " ";

	solve(n-1);
}

int main() {

	int n; cin >> n;

	solve(n);
	return 0;
}