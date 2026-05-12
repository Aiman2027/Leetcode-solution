class Solution {
public:
    int helper(vector<int> v) {
        int n = v.size();
        vector<int> nsl(n, -1), nsr(n, n);
        stack<int> s1;
        for (int i = 0; i < n; i++) {
            while (!s1.empty() && v[i] <= v[s1.top()]) {
                s1.pop();
            }
            if (!s1.empty()) {
                nsl[i] = s1.top();
            }
            s1.push(i);
        }
        stack<int> s2;
        for (int i = n - 1; i >= 0; i--) {
            while (!s2.empty() && v[i] <= v[s2.top()]) {
                s2.pop();
            }
            if (!s2.empty()) {
                nsr[i] = s2.top();
            }
            s2.push(i);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int height = v[i];
            int width = (nsr[i] - nsl[i] - 1);
            ans = max(ans, height * width);
        }
        return ans;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0) {
                    v[i][j] = ((matrix[i][j] == '1') ? 1 : 0);
                } else {
                    v[i][j] = ((matrix[i][j] == '1') ? 1 + v[i - 1][j] : 0);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, helper(v[i]));
        }
        return ans;
    }
};