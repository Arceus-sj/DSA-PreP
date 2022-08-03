#include <iostream>

using namespace std;

int getLength(char name[]) {
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {
    

    char name[20];
    cout << "Enter your name" << "\n";
    cin >> name;

    cout << name << "\n";



    cout << "Length of String is " << getLength(name) << "\n";
    return 0;
}