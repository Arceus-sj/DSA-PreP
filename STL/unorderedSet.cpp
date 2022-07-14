#include <iostream>
#include <vector>
#include <unordered_set>
#include <iterator>

using namespace std;

int main() {

    unordered_set<int> mySet;

    // inserting operation-
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(50);
    mySet.insert(40);


    unordered_set<int> :: iterator itr;

    for(itr = mySet.begin(); itr != mySet.end(); itr++) {
        cout << (*itr) << " ";
    }

    return 0;
}