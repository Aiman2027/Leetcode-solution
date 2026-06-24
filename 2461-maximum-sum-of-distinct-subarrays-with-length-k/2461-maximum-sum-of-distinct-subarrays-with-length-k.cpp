class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxi =0;;
        long long sum =0;

        unordered_map<int,int>mp;
        int i=0;
        for(int j=i;j<nums.size();j++){
            sum +=nums[j];
            mp[nums[j]]++;
            while(j-i+1 > k){
                sum -= nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;}
                

                if(j-i+1 ==k && mp.size()==k){
                    maxi = max(sum , maxi);
                }
                
            }
            return maxi;
    }
};