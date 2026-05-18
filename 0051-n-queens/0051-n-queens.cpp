class Solution {

bool check(int r , int c , vector<string>&v , int n ){
     
      for( int i = r;i>=0 ; i--){
        if(v[i][c] == 'Q') return false;
        }
      
      for(int i = r , j = c ; i>=0 && j>=0 ; i-- ,j--){
         if(v[i][j] == 'Q') return false;
      }
 for(int i = r , j = c ; i>=0 && j<n; i-- ,j++){
         if(v[i][j] == 'Q') return false;
      }
  return true;
    }

void helper(int r ,vector<vector<string>>&ans,vector<string> &v, int n  ){
        if(r== n){
            ans.push_back(v);
            return;
        }
       for(int i=0;i<n;i++){
         if( check(r, i ,v ,n)== false) continue;
         v[r][i] = 'Q';
         helper(r+1, ans , v , n);
         v[r][i] ='.';
}
}
public:
 vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string temp( n , '.');
        vector<string> v(n, temp);
        helper(0, ans, v ,n);
        return ans;
        
    }
};