#include <iostream>
#include <vector>
#include <string>

using namespace std;

char toLowercase(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char s[], int n) {
    int start = 0;
    int end = n - 1;

    for(int i = 0; i < n / 2; i++) {
        if(toLowercase(s[start]) == toLowercase(s[end])) {
            
            if(!(toLowercase(s[start]) >= 'a' && toLowercase(s[start]) <= 'z'))
                start++;
            else if(!(toLowercase(s[end]) >= 'a' && toLowercase(s[end]) <= 'z'))
                end--; 
            else {
                start++;
                end++;
            }
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
   char s[n];
   cin >> s;

   cout << boolalpha << isPalindrome(s, n) << "\n";
    return 0;
}