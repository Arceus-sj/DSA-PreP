#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& a) {
	int n = a.size();

	cout << "SORTING START ..." << "\n";
	for(int i = 1; i < n; i++) {
		int j = i - 1;
		int temp = a[i];

		for(; j >= 0; j--) {

			if(a[j] > temp) {
				a[j+1] = a[j];
			}
			else {
				break;
			}
		}

		a[j+1] = temp;
	}

	cout << "SORTING END ..." << "\n";

	for(auto x:a) {
		cout << x << " ";
	}
	cout << "\n";
}

int main() {
	int n;
	cin >> n;
	vector<int> a;
	int val;
	for(int i = 0; i < n; i++) {
		cin >> val;
		a.push_back(val);
	}

	insertionSort(a);
	return 0;
}