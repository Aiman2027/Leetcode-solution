class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int mini = prices[0];
        for(int k =1; k < prices.size();k++){
            ans = max(ans , prices[k] - mini);
            mini = min(mini , prices[k]);

            }
        

        return ans;
}
};