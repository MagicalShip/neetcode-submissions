class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curmin = prices[0];
        int maxget = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            int curget = prices[i] - curmin;
            maxget = std::max(curget, maxget);
            if(prices[i] < curmin)
            {
                curmin = prices[i];
            }
        }
        return maxget;
    }
};
