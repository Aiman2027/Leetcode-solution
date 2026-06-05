class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            if(s[left] != s[right]){

            return ispalindrom(s , left + 1, right) || ispalindrom(s , left, right - 1);

            }
                left++;
                right--;
        }
        return true;
    }
public:
     bool ispalindrom(string &s , int left, int right){

        while(left < right){

         if(s[left] != s[right]){

            return false;
         }

         left++;
         right--;

     }
     
         return true;

     }
};