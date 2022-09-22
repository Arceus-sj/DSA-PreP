#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	cout << "Is queue is empty? " << boolalpha << q.empty() << "\n";
	cout << "Size of Queue? " << q.size() << "\n";

	cout << "Front element: " << q.front() << "\n";
	cout << "Back element: " << q.back() << "\n";

	while(!q.empty()) {
		cout << q.front() << "\n";
		q.pop();
	}

	cout << "Is queue is empty? " << boolalpha << q.empty() << "\n";
	return 0;
}