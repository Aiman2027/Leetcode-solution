class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int secondplayer = 0;
        int firstplayer = 0;
        int ans =0;
        int active =0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                active = 1-active;
            }
            if((i+1)%6==0){
                active = 1-active;
            }
            if(active==0){
                firstplayer +=nums[i];
            }
            else{
                secondplayer +=nums[i];
            }
        }
        ans = firstplayer-secondplayer;
        return ans;
        
        
    }
};