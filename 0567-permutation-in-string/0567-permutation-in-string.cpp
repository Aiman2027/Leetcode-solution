class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int i = 0;

        unordered_map<char,int> mp;
        unordered_map<char,int> tmp;

        for(int i = 0; i < s1.size(); i++){
            mp[s1[i]]++;
        }

        int k = s1.size();
        int v = s2.size();

        if(k > v){
            return false;
        }

        for(int j = 0; j < v; j++){

        
            tmp[s2[j]]++;

            
            if(j - i + 1 > k){

                tmp[s2[i]]--;

                if(tmp[s2[i]] == 0){
                    tmp.erase(s2[i]);
                }

                i++;
            }


            if(j - i + 1 == k){

                if(mp == tmp){
                    return true;
                }
            }
        }

        return false;
    }
};