class Solution {
public:
    int maxProfit(const vector<int>& prices) {
        
        int minprice = std::numeric_limits<int>::max();
        int maxprofit = 0;
        for (int i = 0; i < prices.size()-1; i++) {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }

};
