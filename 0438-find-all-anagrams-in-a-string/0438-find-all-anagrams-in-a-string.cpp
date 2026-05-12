class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        
        unordered_map<char, int> mp;
        
        for(char ch : p){
            mp[ch]++;
        }

        int count = mp.size();   
        int k = p.size();

        int i = 0, j = 0;

        while(j < s.size()){

            
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;

                
                if(mp[s[j]] == 0){
                    count--;
                }
            }

        
            if(j - i + 1 < k){
                j++;
            }

        
            else if(j - i + 1 == k){

                
                if(count == 0){
                    ans.push_back(i);
                }

    
                if(mp.find(s[i]) != mp.end()){

                    
                    if(mp[s[i]] == 0){
                        count++;
                    }

                    mp[s[i]]++;
                }

                i++;
                j++;
            }
        }

        return ans;
    }
};