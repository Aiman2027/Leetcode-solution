class Solution {
    public:

      vector<vector<int>>results;
      void helper( vector<int>&subset,vector<int>& nums,int idx , int n ){
        if(idx >= n){
            results.push_back(subset);
            return;
        }
        subset.push_back(nums[idx]);
        helper(subset , nums, idx+1, n);
        subset.pop_back();
        helper(subset , nums, idx+1, n);
        }

    public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;

        helper(subset,nums,0, nums.size());
        return results;
    }
};