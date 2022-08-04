#include <iostream>
#include <string>

using namespace stdd;

char convertToLowerCase(char c) {
    if(c >= 'a' && c <= 'z') 
        return c;
    else {
        char temp = c - 'A' + 'a';
        return temp;
    }
}

int main() {
    int n;
    cin >> n;

    char c[n];
    cin >> c;


    return 0;
}