class Solution {
public:

vector<string>numberpad{"","",
"abc","def","ghi","jkl","mno", "pqrs","tuv","wxyz"};
vector<string>answer;
void backtrack(int idx, string &digits, string current){
    if(idx==digits.size()){
        answer.push_back(current);
        return;
    }
    for(auto &l : numberpad[digits[idx]- '0']){
        backtrack(idx+1,digits,current + l); 
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
         return{};
         backtrack(0,digits,"");
         return answer;
        
    }
};