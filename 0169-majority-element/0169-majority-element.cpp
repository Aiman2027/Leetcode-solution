class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi = INT_MIN;
        int ans =0;
        for(auto it: mp){
            int temp = it.second;
            if(temp > maxi){
            maxi = temp;
            ans = it.first;
            }
        }
        return ans;
    }
};