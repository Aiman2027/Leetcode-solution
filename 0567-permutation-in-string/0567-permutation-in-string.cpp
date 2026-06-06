class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char , int>mp;
        unordered_map<char , int>wind;

        int k = s1.size();
        int v = s2.size();

        if(k > v){
            return false;
        }
        
        for(int i=0; i < s1.size() ;i++){
            mp[s1[i]]++;
        }
        int i=0;
         for(int j=0; j< s2.size(); j++){

            wind[s2[j]]++;

            if( j -i + 1 > k){
                 wind[s2[i]]--;
                 
                    if(wind[s2[i]] == 0){
                    wind.erase(s2[i]);
                 }
                 i++;

            }
         
            if(j -i +1 == k){
                if(mp == wind){
                    return true;
                }
            }
         }
       return false;
}
};