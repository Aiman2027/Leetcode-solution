class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];

        for(int i = 1; i < strs.size(); i++) {
            int j = 0;

            while(j < s.length() &&
                  j < strs[i].length() &&
                  s[j] == strs[i][j]) {
                j++;
            }

            s = s.substr(0, j);

            if(s.empty()) return "";
        }

        return s;
    }
};