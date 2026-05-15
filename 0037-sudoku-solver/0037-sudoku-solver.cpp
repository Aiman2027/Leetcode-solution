class Solution {
      bool check(int r, int c, vector<vector<char>>& board, char ch){
      for(int i= 0;i<9;i++){
        if(board[r][i] == ch ) return false;
      }
      for(int i=0;i<9;i++){
        if(board[i][c] == ch) return false;
      }
   // grid wise
   int r1= r - (r %3);
     int c1= c - (c%3);
   for(int i= r1; i<r1+3 ;i++){
    for(int j= c1; j<c1+3 ; j++){
        if(board[i][j] == ch) return false;
    }
   }
  return true;
}

    bool helper(int r , int c, vector<vector<char>>& board ){
        if(r == 9){
            return true;
        }

        if(c==9){
            return helper(r+1, 0, board);
        }
        if(board[r][c] != '.'){
             return helper(r ,c+1, board);
        }
        for(char ch ='1';ch<='9';ch++){
            if(check(r, c , board , ch) == false) continue;
            board[r][c] = ch;
            bool ans = helper( r , c+1 , board );
            if(ans == true){
                return true;
            }
            board[r][c] = '.';
            } 
  return false;
       
    }
  public:
    void solveSudoku(vector<vector<char>>& board) {
      bool ans =  helper(0 , 0 , board);
                
 }
};