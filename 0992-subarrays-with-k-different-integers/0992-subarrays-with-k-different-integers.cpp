class Solution {
    public:
    int atmost(vector<int>& nums,int k){
        unordered_map<int,int>mp;
        int cnt =0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            mp[nums[j]]++;
            while(mp.size()>k){
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                mp.erase(nums[i]);
               i++; 
            }
            
            cnt +=(j-i+1);}
            
     return cnt;
    }
public:

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};