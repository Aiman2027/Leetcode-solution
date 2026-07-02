class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int cnt =0;
        long long pro =1;
        int i=0;
        for(int j=0;j<nums.size();j++){
            pro *=nums[j];
           while (pro >= k) {
                pro /= nums[i];
                i++;
            }

            cnt += (j - i + 1);
        }
        return cnt;
    }
};