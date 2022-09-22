#include <iostream>
#include <stack>

using namespace std;

int main() {

	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);


	cout << s.top() << "\n";


	cout << "Is Stack is empty? " << boolalpha << s.empty() << "\n";
	cout << "Size of stack is? " << s.size() << "\n";

	while(!s.empty()) {
		cout << s.top() << "\n";
		s.pop();
	}

	cout << "Is Stack is empty? " << boolalpha << s.empty() << "\n";

	return 0;
}