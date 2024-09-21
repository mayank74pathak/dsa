int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=prices[0];
        int cost;
        for(int i=1;i<prices.size();i++)
        {
            cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(prices[i],mini);
        }
    return profit;
    }
