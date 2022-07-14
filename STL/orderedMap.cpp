#include <iostream>
#include <string>
#include <iterator>
#include <map>

using namespace std;

int main() {   

    // initilization-
    map<int, string> m;

    // in map we store element in key-value pairs
    m[1] = "asd";
    m[4] = "jkl";
    m[3] = "qwe";
    
    // we can also use .insert() to store element
    m.insert({12, "mnb"});


    // traversing maps
    map<int, string> :: iterator it;

    for(it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << " " << (*it).second << "\n";
    }
    return 0;
}