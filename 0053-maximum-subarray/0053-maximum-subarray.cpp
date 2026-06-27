class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi =INT_MIN;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum = max(nums[i], sum+nums[i]);
            maxi = max(sum,maxi);
            }
            return maxi;
        
    }
};