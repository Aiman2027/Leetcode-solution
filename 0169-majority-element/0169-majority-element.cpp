class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi= 0;
        int ans =0;
        for(auto it: mp){
            int temp = it.second;
            if(temp > maxi){
                maxi = it.second;
                ans = it.first;
                }
          
        }
        return ans;
        
    }
};