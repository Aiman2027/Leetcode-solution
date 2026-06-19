class Solution {
public:
    int expand(string &s, int left, int right) {
        while(left >= 0 && right < s.size() &&
              s[left] == s[right]) {
            left--;
            right++;
        }

        return right - left - 1;
    }

    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 1;

        for(int i = 0; i < s.size(); i++) {

            int oddLen = expand(s, i, i);
            int evenLen = expand(s, i, i + 1);

            int currLen = max(oddLen, evenLen);

            if(currLen > maxLen) {
                maxLen = currLen;
                start = i - (currLen - 1) / 2;
            }
        }

        return s.substr(start, maxLen);
    }
};