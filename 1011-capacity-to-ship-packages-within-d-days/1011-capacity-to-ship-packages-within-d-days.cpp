class Solution {
     public:

     int check(vector<int>& weights, int capacity){
         int days = 1, value =0;
         for(int i=0; i< weights.size();i++){
            if(weights[i] + value > capacity ){
                days++;
                value = weights[i];
            }
            else{
               value += weights[i];  
            }
    }
  return days;

     }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin() , weights.end() ,0);

        while(low <= high){

            int mid = low+ (high- low)/2;

            if(check(weights, mid) <= days){
             high = mid-1;
            }
            else{
              low = mid+1;
            }
            }
       return low; 
    }
};