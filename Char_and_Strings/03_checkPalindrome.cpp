#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(char s[], int n) {
    int start = 0;
    int end = n - 1;

    for(int i = 0; i < n / 2; i++) {
        if(s[start] == s[end]) {
            start++;
            end--;
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