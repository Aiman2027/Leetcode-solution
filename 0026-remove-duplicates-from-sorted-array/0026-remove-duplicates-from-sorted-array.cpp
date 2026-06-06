class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=0;
        int count =0;
        for(int j = i+1 ;j< nums.size() ;j++){
            if(nums[i] != nums[j]){
                count++;
                i++;
                nums[i] = nums[j];
               
            }
        }
        return count + 1;
        }
};