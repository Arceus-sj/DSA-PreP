#include <iostream>

using namespace std;

bool isPowerOfTwo(int n)
{
    // base case 
    if(n == 1)
        return true;
    else if(n % 2 != 0)
        return false;
    
    
    return isPowerOfTwo(n/2);
    // Write your code here
}

int main() {
    int n;
    cin >> n;
    
    cout << boolalpha << isPowerOfTwo(n) << "\n";
}