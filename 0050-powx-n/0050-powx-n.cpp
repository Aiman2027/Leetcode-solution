class Solution {
public:
double power(double x, int n){
    if(n==0)return 1.0;
    double half = power(x , n/2);
    
    if(n%2==0){
        return  half * half;

    } 
        return  x * half * half;
} 


public:
    double myPow(double x, int n) {
        long long N = n;
         if(N <0){
            x = 1.0/x;
            N = -N;
         }
         return power(x ,N);
        
    }
};