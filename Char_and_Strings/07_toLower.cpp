#include <iostream>
#include <string>

using namespace std;

bool isLowerCase(char c) {
	if(c >= 'a' && c <= 'z')
		return true;
	return false;
}

string toLowerCase(string s) {
	// string ans;
	for(int i = 0; i < s.length(); i++) {
		if(isLowerCase(s[i]) || !(s[i] >= 'A' && s[i] <= 'Z')) {
			continue;
		}	
		else {
			s[i] = s[i] - 'A' + 'a';
		}
	}
	


	return s;
}

int main() {

	string s;
	getline(cin, s);


	cout << toLowerCase(s) << "\n";
	return 0;
}