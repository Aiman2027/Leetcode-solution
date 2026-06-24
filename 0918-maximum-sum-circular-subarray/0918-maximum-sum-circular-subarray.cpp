class Solution {
    public:
    int maxsubarray(vector<int>& nums){
        int sum = nums[0];
        int maxii= nums[0];

        for(int i=1;i<nums.size();i++){
            sum = max(sum +nums[i] , nums[i]);
            maxii = max(sum , maxii);
        }
       return maxii;
    }
    int  minsubarray(vector<int>& nums){
        int sum =nums[0];
        int minii = nums[0];
        for(int i=1;i<nums.size();i++){
            sum = min(nums[i], sum + nums[i]);
            minii =  min(minii ,sum);
        }
       return minii;
    }
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi = maxsubarray(nums);
        int mini = minsubarray(nums);
        int tsum =0;
        for(int i=0;i<nums.size();i++){
            tsum +=nums[i];
        }
        
        int cirrmax =  tsum -mini;
        if(maxi > 0){
            return max(maxi, cirrmax);
        }
        return maxi;
        
    }
};