class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2 =0;
        int prev1 = nums[0];

        for(int i=1;i<nums.size();i++){
            int curr = max(prev1 , prev2+nums[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};