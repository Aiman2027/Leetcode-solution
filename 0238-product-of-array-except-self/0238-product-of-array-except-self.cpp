class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
     vector<int> pre(n,1);
     vector<int> suff(n,1);
     
     pre[0] = 1;
     for(int i= 1; i<n; i++){
        pre[i] = pre[i-1] * nums[i-1];
     }
     for(int i= n-2; i >= 0; i--){
        suff[i] = suff[i+1] * nums[i+1];
     }

     vector<int> ans;
     for(int i=0; i<n ;i++){
        int t = pre[i] * suff[i];
        ans.push_back(t);
     }
     return ans;

}
};