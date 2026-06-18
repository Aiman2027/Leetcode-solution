class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        int prev = 1;
        int next =2;

     for(int i=3;i<=n;i++){
        int temp = prev + next;
        prev = next;
        next = temp;
        
        }
        return next;
    }
};