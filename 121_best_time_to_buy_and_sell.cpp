#include <vector>          // For std::vector
#include <iterator>        // For std::make_move_iterator
#include <algorithm>       // For std::copy (if needed)

class Solution {
//intuition: 
//brute force: double for loop 

/*
  int maxProfit(vector<int>& prices) {
        int profit = 0; 
        for(int i = 0; i < prices.size() - 1; i++) {
            for(int j = i + 1; j < prices.size(); j++){
                if(prices.at(j) - prices.at(i) > profit) {
                    profit = prices.at(j) - prices.at(i); 
                }
            }
        }

     return profit;    
    }
*/

public:
    int maxProfit(std::vector<int>& prices) {
        int maxi = 0;
        int minimum = prices[0];
        for (int i=0; i< prices.size(); i++ ){
            minimum = std::min(minimum, prices[i]);
            maxi = std::max(maxi ,prices[i] - minimum);
        }
        return maxi;
    }            
};