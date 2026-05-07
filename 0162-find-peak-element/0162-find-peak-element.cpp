class Solution {
public:
    bool helper( vector<int>& nums , int mid , int n){
    if( mid == n -1){
            return true;
           } 
        if(nums[mid] > nums[mid + 1]){
           return true;
        }
         return false;  
    }
public:
    int findPeakElement(vector<int>& nums) {
        int s =0;
        int e = nums.size() -1;
        int n= nums.size();
        if(n==1) return 0;
        int ans =0;
       
        while(s<=e){
            int mid = s + (e- s)/2;
            //FFFFFTTTT YE CASE hai
            if(helper(nums ,mid , n)){
                ans = mid;
                e =  mid -1;
                }
            else{
                s = mid + 1;
            }
            }
        return ans;
    }
};