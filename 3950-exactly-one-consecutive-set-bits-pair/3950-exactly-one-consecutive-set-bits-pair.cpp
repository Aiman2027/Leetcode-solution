class Solution {
public:
    bool consecutiveSetBits(int n) {
        int count =0;
        int last = -1;


        while(n != 0){
            int curr = n%2;
            if(last == 1 && curr ==1)count++;
            last = curr;
            n /=2;
        }
        if(count == 1) return true;
        return false;
    }
    };
