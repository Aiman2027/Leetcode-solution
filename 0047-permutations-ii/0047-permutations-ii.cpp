class Solution {
    public:
      vector<vector<int>>result;
      void uniqueper(vector<int>&nums, vector<int>&subset,vector<bool>&used, int n ){
        if(subset.size()==n){
            result.push_back(subset);
            return; }

            for(int i=0;i<n;i++){

             if (used[i])
                continue;

            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
                continue;
                used[i]= true;
                subset.push_back(nums[i]);
                uniqueper(nums,subset,used,n);

                subset.pop_back();
                used[i]=false;
}
}

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>subset;
        vector<bool>used(n,false);
        uniqueper(nums, subset,used ,n);
        return result;
    }
};