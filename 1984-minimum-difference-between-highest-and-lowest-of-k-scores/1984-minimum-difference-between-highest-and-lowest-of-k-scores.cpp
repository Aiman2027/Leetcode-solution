class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        sort(nums.begin() , nums.end());
        int ans = INT_MAX;
        while( j < n){
            if(j - i +1 == k){
                ans = min (ans , nums[j] - nums[i]);
                i++;
            }
          j++;

        }
     return ans;
    }
};
