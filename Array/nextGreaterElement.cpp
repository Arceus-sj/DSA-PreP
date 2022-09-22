// Problem Link: https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll> nextLargerElement(vector<ll>& a, int n) {
	
	vector<ll> res;
	for(int i = 0; i < n - 1; i++) {

		for(int j = i + 1; j < n; j++) {

			if(a[i] < a[j]) {
				res.push_back(a[j]);
				break;
			}
			else if(j == n - 1 && a[i] > a[j]) {
				res.push_back(-1);
				break;
			}

		}
	}

	res.push_back(-1);
	return res;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<ll> a;
	vector<ll> ans;
	ll val;
	for(int i = 0; i < n; i++) {
		cin >> val;
		a.push_back(val);
	}


	ans = nextLargerElement(a, n);

	for(auto x:ans) {
		cout << x << " ";
	}
	return 0;
}
