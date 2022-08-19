#include <iostream>
#include <array>

using namespace std;

int main() {
	array<int, 5> arr = {1,2,3,4,50};

	for(int i=0;i<5;i++) {
		cout << arr[i];
	}
	cout << "\n";
	cout << "array size? " << arr.size() << "\n";
	cout << "array is empty or not? " << boolalpha << arr.empty() << "\n";
	
	cout << "first element: " << arr.front() << "\n";
	cout << "last element: " << arr.back() << "\n";

	cout << "element at index 2: " << arr.at(2);



	return 0;
}