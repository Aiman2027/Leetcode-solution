class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i =0;
        int j=0;
        double asum= INT_MIN;
        double tsum =0;
        while(j < n){
          tsum += nums[j];
          if(j-i+1 == k){
            double s = tsum /k;
            asum = max(asum , s);
            tsum -= nums[i];
            i++;
          }
         j++;
}
return asum;
        
    }
};