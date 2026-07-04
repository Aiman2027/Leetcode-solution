class Solution {
    public:
    vector<vector<int>>result;
    void takeit(vector<int>& nums, vector<int>&subset,  vector<bool>&used, int n){
        if(subset.size()==n){
            result.push_back(subset);
            return;
        }

        for(int i=0;i<n;i++){

            if(used[i])
            continue;
            used[i]=true;
            subset.push_back(nums[i]);
            takeit(nums,subset,used,n);

            subset.pop_back();
            used[i]=false;

            }
}

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>subset;
        int n = nums.size();
        vector<bool> used(n, false);
         takeit(nums,subset, used, n);
        return result;
}
};