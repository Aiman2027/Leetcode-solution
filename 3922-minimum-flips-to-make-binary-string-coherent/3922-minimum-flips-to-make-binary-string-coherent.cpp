class Solution {
public:
    int minFlips(string s) {
      int n= s.size();
        vector<int>prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1] = prefix[i] +(s[i]=='1');}
            int ones = prefix[n];
            int zeros = n - ones;
            int ans = min(ones ,zeros);
            if(ones > 0){
                ans =min(ans ,ones -1);
                
            }
            else{
                ans = min(ans ,1);
            }
            if(n>=2){
                int mones = prefix[n-1] -prefix[1];
                int flips =
                (s[0] =='0') + (s[n-1] =='0') + mones;
                ans = min(ans ,flips);
            }
        
        return ans;
    }
};