class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        
        int ans = -1;
        int mini = INT_MAX;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize && capacity[i] < mini){
                mini = capacity[i];
                ans =i;
            }
        }     
        return ans;
    }
};