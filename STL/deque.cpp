#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> d;

    d.push_back(10);

    d.push_front(20);

    for(auto i:d) 
        cout << i << " ";


    cout << d.at(1) << "\n";
    return 0;
}