class Solution {
public:

        double findMaxAverage(vector<int>& nums, int k) {
        int i =0;
        int j=0;
        int n = nums.size();
        double sum = 0;
        double maxi = INT_MIN;
        while(j < n){
            sum += nums[j];
            if(j -i +1 ==k){
                double avg = sum / k;
                maxi = max(maxi , avg);
                sum -= nums[i];
                i++;
                }
                j++;
        }
        return maxi;
    }

};