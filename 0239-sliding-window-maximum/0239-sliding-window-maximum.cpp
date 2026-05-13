class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        list<int> li;
        vector<int> ans;

        int i = 0;

        for(int j = 0; j < nums.size(); j++) {

            while(!li.empty() && li.back() < nums[j]) {
                li.pop_back();
            }

            li.push_back(nums[j]);

            if(j - i + 1 == k) {

                ans.push_back(li.front());

                if(nums[i] == li.front()) {
                    li.pop_front();
                }

                i++;
            }
        }

        return ans;
    }
};