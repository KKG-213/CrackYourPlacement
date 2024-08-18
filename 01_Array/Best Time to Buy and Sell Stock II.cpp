class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // we shall do it by finding local maxima and local minima
        // if next number is less than current, sell at current and buy next
        // if next number is larger than current, keep going
        // buy at first, if next is smaller, sell then and there, buy at next

        int boughtat=0;
        int totalprofit=0;
        if(prices.size()==1)
        {
            return 0;
        }
        for(int i=0; i<prices.size()-1; i++)
        {
            if(prices[i]<prices[i+1])
            {
                if(i == prices.size()-2)
                {
                    totalprofit += prices[i+1]-prices[boughtat];
                }
                continue;
            }
            else
            {
                totalprofit += prices[i]-prices[boughtat];
                boughtat=i+1;
            }
        }
        return totalprofit;
    }
};
