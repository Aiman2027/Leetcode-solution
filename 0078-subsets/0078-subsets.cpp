class Solution {
    vector<vector<int>>result;
    void  findsubset(vector<int>& nums,vector<int>&subset, int idx , int n){
        if(idx >=n){
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[idx]);
        findsubset(nums,subset,idx+1,n);
        subset.pop_back();
        findsubset(nums,subset,idx+1,n);
        }


public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int idx =0;
        vector<int>subset;
        findsubset(nums,subset,idx,n);
        return result;
        
    }
};