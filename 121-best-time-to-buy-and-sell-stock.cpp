class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0], maxProfit = 0;
        for (int& price : prices) {
            minPrice = min(price, minPrice);
            int diff = price - minPrice;
            maxProfit = max(diff, maxProfit);
        }
        return maxProfit;
    }
};
