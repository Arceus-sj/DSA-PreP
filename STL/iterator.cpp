#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main () {
	vector<int> v = {1,2,3,4,5};

	// vector<int>::iterator it = v.begin();
	// for(it = v.begin(); it != v.end(); ++it) {
	// 	cout << *it << " ";
	// }

	vector<pair<int, int>> v_p = {{1,2}, {3,4}, {5,6}};
	vector<pair<int, int>>::iterator it = v_p.begin();

	for(it = v_p.begin(); it != v_p.end(); it++) {
		cout << (*it).first << " " << (*it).second << "\n";
	} 

	return 0;
}