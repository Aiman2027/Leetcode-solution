class Solution {
    public:
    bool tovowel(char ch){
        char c = tolower(ch);
        return c=='a'|| c=='e'|| c== 'i' || c=='o'|| c=='u';
    }

public:
    string reverseVowels(string s) {
        int l =0;
        int r = s.size();

        while(l <r){
            
            while(l<r && !tovowel(s[l])){
                l++;
            }
            while(l <r && !tovowel(s[r])){
                r--;
            }
            swap(s[l] ,s[r]);
            l++;
            r--;

        } 
        return s;
    }
};