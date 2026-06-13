class Solution {
public:
      long long check(vector<int>& piles, int mid){
        long long value = 0;
          for(int i=0 ;i< piles.size() ;i++){
            value += (piles[i] + mid - 1LL) / mid;

          }
          return value;
        }


  public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int maxpiles =INT_MIN;
        for(int i =0;i< piles.size() ;i++){
            maxpiles = max(maxpiles , piles[i]);
            }
            int ans =  maxpiles;
          while(low <= maxpiles){
            int mid = low + (maxpiles - low)/2;
            if(check(piles , mid) <= h){
                ans = mid;
                maxpiles = mid-1;
            } 
            else{
                low = mid +1;
            }

          }  
        return ans;

    } 
};