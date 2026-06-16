class Solution {
    public:
    vector<vector<int>>results;
    void subset2(vector<int>& nums, vector<int>&subset, int idx , int n){
      //basecase
      if(idx >= n){
        results.push_back(subset);
        return;
      }
      //taken
      subset.push_back(nums[idx]);
      subset2(nums,subset , idx+1, n);
      subset.pop_back();

      //nottaken
      int nextidx = idx+1;
      while(nextidx < n && nums[idx] == nums[nextidx]){
        nextidx++;
      }
      subset2(nums,subset ,nextidx, n);
}


public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int>subset;
        sort(nums.begin(), nums.end());
        subset2(nums, subset , 0 , n);
        return results;

        
    }
};