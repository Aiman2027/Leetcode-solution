class Solution {
    public:
  bool checkpermutation(int a, int b){
      string c = to_string(a);
      string d = to_string(b);
      sort(c.begin(),c.end());
      sort(d.begin(),d.end());
      if(c==d){
          return true;
      }
     return false; 
  }
    
    int factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        int ans = n *factorial(n-1);
        return ans;
        
    }
    
public:
    bool isDigitorialPermutation(int n) {
        int fans=0;
        int original =n;
         while(n != 0){
             int digit = n%10;
             int ans2 = factorial(digit);
             fans += ans2;
             n= n/10;
         }
        if(checkpermutation(original,fans))
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};