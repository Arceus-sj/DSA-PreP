#include <bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string res = "";
    
    // case 1: if size of w1 == word2
    if(word1.size() == word2.size()) {
        for(int i = 0; i < word1.size(); i++) {
            res.push_back(word1[i]);
            res.push_back(word2[i]);
        }
        return res;
    }
    else if(word1.size() > word2.size()) {
        int i = 0;
        for(i = 0; i < word2.size(); i++) {
            res.push_back(word1[i]);
            res.push_back(word2[i]);
        }
        
        for(; i < word1.size(); i++) {
            res.push_back(word1[i]);
        }
        
        return res;
    }
    else {
        int i = 0;
        for(i = 0; i < word1.size(); i++) {
            res.push_back(word1[i]);
            res.push_back(word2[i]);
        }
        
        for(; i < word2.size(); i++) {
            res.push_back(word2[i]);
        }
        
        return res;
    }
    return res;
}

int main() {
	string s1 = "abcd";
	string s2 = "xyz";
	
	string output = mergeAlternately(s1, s2);
	
	cout << output << "\n";
	return 0;

}
