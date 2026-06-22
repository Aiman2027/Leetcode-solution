class Solution {
public:
    string reverseWords(string s) {

        string temp = "";
        int i = 0, n = s.size();

        while (i < n) {
            while (i < n && s[i] == ' ')
                i++; 

            string word = "";

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            if (!word.empty()) {
                if (!temp.empty())
                    temp += ' ';
                temp += word;
            }
        }

        s = temp;

        
        reverse(s.begin(), s.end());

        int start = 0;

        for (int j = 0; j < s.size(); j++) {
            if (s[j] == ' ') {
                reverse(s.begin() + start, s.begin() + j);
                start = j + 1;
            }
        }

        
        reverse(s.begin() + start, s.end());

        return s;
    }
};