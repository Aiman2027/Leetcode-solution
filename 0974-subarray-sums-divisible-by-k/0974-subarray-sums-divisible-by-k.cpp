class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt =0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int presum =0;

        for(int i=0;i<nums.size();i++){
            presum +=nums[i];
            int rem = presum%k;
            if(rem<0){
                rem = rem+k;
            }
            if(mp.find(rem) != mp.end()){
                cnt += mp[rem];
            }
            mp[rem]++;
        }
        return cnt;
    }
};