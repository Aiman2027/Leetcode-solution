class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>prel(n);
        vector<int>prer(n);

        prel[0] = nums[0];
        for(int i=1;i<n;i++){
            prel[i] = prel[i-1] + nums[i];
        }
        prer[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            prer[i] = prer[i+1] + nums[i];
        }
        for(int i=0;i<n;i++){
            if(prel[i] == prer[i]){
                return i;

            }
            }

   return -1;
        
    }
};