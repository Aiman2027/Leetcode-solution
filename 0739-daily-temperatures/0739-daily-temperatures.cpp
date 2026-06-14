class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        vector<int>ans(n);
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
                int pre = s.top();
                s.pop();
                ans[pre] = i - pre;
                }
           s.push(i);
             
        }
        return ans;
    }
};