class Solution {
public:

    int shipc(vector<int>& weights, int c) {
        int neededday = 1;
        int capacity = 0;

        for (int j : weights) {
            capacity += j;

            if (capacity > c) {
                neededday++;
                capacity = j;
            }
        }

        return neededday;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int maxw = 0;
        int minc = 0;

        for (int i : weights) {
            maxw += i;
            minc = max(minc, i);
        }

        int l = minc;
        int h = maxw;
        int ans = 0;

        while (l <= h) {

            int mid = l + (h - l) / 2;

            if (shipc(weights, mid) > days) {
                l = mid + 1;
            }
            else {
                ans = mid;
                h = mid - 1;
            }
        }

        return ans;
    }
};