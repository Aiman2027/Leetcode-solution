class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int rvalue = target - nums[i];
            if(mp.find(rvalue)!= mp.end()){
                ans.push_back(mp[rvalue]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};