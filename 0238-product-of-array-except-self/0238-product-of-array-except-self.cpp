class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> pre(n,1);
        vector<int> suff(n,1);

         pre[0] =1;
        for(int i=1;i<nums.size(); i++){
             pre[i] = pre[i-1] * nums[i-1];
            }
             vector<int>ans;
            for(int i=nums.size()-2; i>=0; i--){
            suff[i] = suff[i+1] * nums[i+1];
            }
            for(int i=0;i<nums.size() ;i++){
                ans.push_back(pre[i] * suff[i]);
            }
       return ans;
           } 
        
};