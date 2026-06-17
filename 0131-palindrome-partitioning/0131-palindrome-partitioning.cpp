class Solution {
public:
      vector<vector<string >>ans;
      vector<string>curr;
     
     bool ispalindrome(string &s, int left , int right){
        for(int i= left ;i<=right; i++){
            if(s[i] != s[left - (i - right )])return false;
        }
        return true;
     }


      void backtrac(string &s , int idx , vector<string> &palin){
        if(idx==s.size()){
            ans.push_back(palin);
            return;
        }
        string temp = "";
        for(int i = idx ; i<s.size() ;i++){
             temp += s[i];
            if(ispalindrome(s, idx , i)){
                palin.push_back(temp);
                backtrac(s , i+1 ,palin);
                palin.pop_back();
            }
        }
}
    vector<vector<string>> partition(string s) {
        backtrac(s,0,curr);
        return ans;
        
    }
};