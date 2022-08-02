#include <iostream>

using namespace std;

void printInc(int n) {
    if(n == 0)
        _Exit(0);
    cout << n << " ";
    printInc(n-1);
}

int main() {
    int n;
    cin >> n;
    printInc(n);
    return 0;
}