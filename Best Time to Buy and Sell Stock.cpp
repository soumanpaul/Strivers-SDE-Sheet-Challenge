#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maximumProfit = 0;
    int minPrice = prices[0];

    for(int i=1; i < prices.size(); i++){
        int profit = 0;
        if(minPrice < prices[i]){
            profit = prices[i] - minPrice;
            maximumProfit = max(maximumProfit, profit);
        } else minPrice = prices[i];

    }
  
    return maximumProfit;
}
