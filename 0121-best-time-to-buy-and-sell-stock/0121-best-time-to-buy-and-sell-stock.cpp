class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j = 0;
        int ans =0;
        int buyprices = prices[0];
         while(j < prices.size()){
            int p = prices[j] - buyprices;
            ans = max(ans , p);
            buyprices = min(prices[j] , buyprices);
            
           j++; }
        return ans;
    }
};