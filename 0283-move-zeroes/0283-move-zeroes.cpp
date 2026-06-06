class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i= 0;
        while( i < nums.size()){

       for(int j = i+1; j < nums.size() ;j++){

            if(nums[i] == 0 ){
                
                swap(nums[i] , nums[j]);
            }
        }

        i++;
        }
    }
};