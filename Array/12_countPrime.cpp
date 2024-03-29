#include <iostream>

using namespace std;

bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n%i==0) {
            return false;
        }
    }

    return true;
}


int countPrimes(int n) {
    int count = 0;
    for(int i = 2; i < n; i++) {
        if(isPrime(i))
            count++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    // cout << boolalpha << isPrime(n) << "\n";
    cout << countPrimes(n) << "\n";
    return 0;
}