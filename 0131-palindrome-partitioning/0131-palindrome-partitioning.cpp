class Solution {
    public:
     vector<vector<string>>result;
     bool ispalindrome(string&s , int left , int right){
        while(left <= right){
            if(s[left]!= s[right])return false;
            left++;
            right--;
        }
      return true;
     }

public:
     void fun(string &s,vector<string>&path, int idx, int n ){
        if (idx == n) {
            result.push_back(path);
            return;
        }
           for(int i = idx; i<n ;i++){
            if(ispalindrome(s, idx ,i)){
            path.push_back(s.substr(idx , i-idx+1));
            fun(s, path, i+1, n);
            path.pop_back();
           } 
           }
     }
public:
    vector<vector<string>> partition(string s) {
        vector<string>path;
        int n = s.size();
        fun(s , path , 0 ,n);
        return result;
        
    }
};