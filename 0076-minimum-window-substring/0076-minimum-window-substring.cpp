class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char,int> mp;

        for(char ch : t){
            mp[ch]++;
        }

        int count = mp.size();

        int i = 0;
        int j = 0;

        int mini = INT_MAX;
        int start = 0;

        while(j < s.size()){

            
            if(mp.find(s[j]) != mp.end()){

                mp[s[j]]--;

                if(mp[s[j]] == 0){
                    count--;
                }
            }

            
            while(count == 0){

                
                if(j - i + 1 < mini){
                    mini = j - i + 1;
                    start = i;
                }

                
                if(mp.find(s[i]) != mp.end()){

                    mp[s[i]]++;

                    if(mp[s[i]] > 0){
                        count++;
                    }
                }

                i++;
            }

            j++;
        }

        if(mini == INT_MAX){
            return "";
        }

        return s.substr(start, mini);
    }
};