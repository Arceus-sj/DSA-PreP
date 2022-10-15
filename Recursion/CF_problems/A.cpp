#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
	// base case
	if(n <= 0)
		return;


	// rr
	solve(n-1);

	cout << "I love Recursion" << "\n";

}

int main() {
	int n; cin >> n;


	solve(n);
	return 0;
}