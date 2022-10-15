#include <iostream>

using namespace std;

void reachHome(int src, int dest) {


    // base-case
    if(src == dest) {
        cout << "Reached Your Destination ..." << "\n";
        return ;
    }

    // recursive-case
    reachHome(src+1, dest);

        // processing
    cout << "Source " << src << " to Destination " << dest << "\n";

}

int main() {
    int src, dest;
    cin >> src >> dest;

    reachHome(src, dest);

    return 0;
}