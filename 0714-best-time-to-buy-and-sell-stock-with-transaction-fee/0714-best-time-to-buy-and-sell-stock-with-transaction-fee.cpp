class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int hold = INT_MIN;
        int cash = 0;

        for (int price : prices) {
            hold = max(hold, cash - price);
            cash = max(cash, hold + price - fee);
        }

        return cash;
    }
};