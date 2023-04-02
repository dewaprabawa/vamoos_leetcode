class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        for(int i = 1; i < prices.size();i++){
            int currentProfit = prices[i] - prices[i-1];
            sum += max(currentProfit,0);
        }
        return sum;
    }
};