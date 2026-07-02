class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.empty())return 0;
        long long n = g.size()-1;
        long long m = s.size()-1;
        long long l =0;
        long long r=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        while(l <= n && r <= m){
            if(s[r] >= g[l]){
                r++;
                l++;
            }
            else{
                r++;
            }
        
        }
        return l;
    }
};