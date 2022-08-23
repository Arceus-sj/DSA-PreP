#include <iostream>

using namespace std;

int power(int n) {
    if(n == 0)
        return 1;
    
    // int sp = power(n-1);
    // int bp = 2 * sp;

    return 2 * power(n-1);

}

int main() {
    int n;
    cin >> n;

    cout << power(n) << "\n";
    return 0;
}