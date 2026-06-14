class Solution {
     public:

     long long check(vector<int>& piles, int mid){
        long long value = 0;
        for(int i=0; i < piles.size() ;i++){
            value += ceil((double)piles[i] /mid);
        }
      return value;
     }
    public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = *max_element(piles.begin() , piles.end());
        int ans =0; 
        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(piles, mid) <= h){
                ans = mid;
                high = mid -1;
            }
            else{
                low =  mid +1;
            }
        }
     return ans;
    }
};