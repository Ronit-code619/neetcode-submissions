class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int res=0;
        int buy=prices[0];
        for(int i=0;i<=n-1;i++){
            buy=min(buy,prices[i]);
            res=max(res,prices[i]-buy);
        }
        return res;

    }
};
