class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int n = s.size() -1;
        int j =n;
        while(i < n){
            swap(s[i] , s[n]);
            i++;
            n--;
        }
         
        
    }
};