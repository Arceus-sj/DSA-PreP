#include <iostream>
#include <string>

using namespace std;

int numJewelsInStones(string jewels, string stones) {
	int count = 0;

	for(int i = 0; i < jewels.size(); i++) {

		for(int j = 0; j < stones.size(); i++) {

			if(jewels[i] == stones[j])
				count++;
		}
	}

	return count;
}

int main() {
	string jewels;
	string stones;

	getline(cin, jewels);
	getline(cin, stones);


	cout << jewels << " and " << stones << "\n";


	return 0;
}
