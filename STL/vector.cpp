#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for(auto i:v)
		cout << i << " ";
	cout << "\n";

	v.pop_back();

	for(auto i:v)
		cout << i << " ";
	cout << "\n";


	cout << "Capacity: " << v.capacity() << "\n";
	cout << "Size: " << v.size() << "\n";

	// coping one vector to another:

	vector<int> a(5,1);

	for(auto i:a)
		cout << i << " ";
	cout << "\n";

	vector<int> b(a);

for(auto i:b)
		cout << i << " ";
	cout << "\n";	


	return 0;
}