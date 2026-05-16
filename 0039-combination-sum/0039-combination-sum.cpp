class Solution {
public:
      
     void solve(int idx ,vector<int>& arr, int target,vector<int>&temp,
      vector<vector<int>> &ans){
         if(target==0){
            ans.push_back(temp);
            return;
            }
           if(idx==arr.size())return; 
           if(arr[idx] <= target){
             temp.push_back(arr[idx]);
             solve(idx,arr,target-arr[idx],temp,ans);
             temp.pop_back();
             }
             solve(idx+1,arr,target,temp,ans);
             }
      vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> ans;
       vector<int>temp;
       solve(0, candidates, target, temp, ans);
       return ans;
        
    }
};