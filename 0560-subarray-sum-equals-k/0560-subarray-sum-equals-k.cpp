class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt =0;
        int n =  nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum =0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(mp.find(sum -k) != mp.end()){
                cnt +=mp[sum-k];
            }
            mp[sum]++;
        }
      
      return cnt;
        
    }
};