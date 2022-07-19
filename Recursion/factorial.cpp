#include <iostream>

using namespace std;

// int factorial(int n) {
//     if(n == 0)
//         return 1;
//     int partialAns = factorial(n-1);
//     return n*partialAns;
// }


void factorial(int n) {

    if (n == 0)
        _Exit(0);
    else {
       n = n * factorial(n-1);
    }
}

int main() {
    int n;
    cin >> n;

    factorial(n);
    return 0;
}