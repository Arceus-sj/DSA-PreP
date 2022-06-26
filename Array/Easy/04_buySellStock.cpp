#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    // int lowestPrice = INT_MAX;
    // int lowestPeiceIndex = 0;
    // // lowest stock price
    // for(int i = 0; i < n; i++) {
    //     if (prices[i] < lowestPrice) {
    //         lowestPrice = prices[i];
    //         lowestPeiceIndex = i;
    //     }
    // }

    // // highest stock after the lowest stock day
    // int highestPrice = INT_MIN;
    // for(int i = lowestPeiceIndex; i < n; i++) {
    //     if(prices[i] > highestPrice)
    //         highestPrice = prices[i];
    // }
    // return highestPrice - lowestPrice;


    int minAmount = prices[0];
    int maxProfit = 0;
    for(int i = 0; i < n; i++) {
        if(prices[i] < minAmount) 
            minAmount = prices[i];
        
        int maxAmount = prices[i] - minAmount;

        if(maxAmount > maxProfit)
            maxProfit = maxAmount;
        
    }   

    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices;
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        prices.push_back(val);
    }

    cout << maxProfit(prices) << "\n";
    return 0;
}
