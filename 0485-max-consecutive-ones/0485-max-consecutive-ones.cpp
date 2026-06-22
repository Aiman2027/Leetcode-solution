class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxi =0;

        int i =0;
        for(int j =0 ;j< nums.size();j++){
            if(nums[j]==0){
                i = j+1;
            }
        
        maxi = max(maxi , j-i+1);}
        return maxi;

    }
};