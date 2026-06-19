class Solution {
public:
    vector<vector<int>> result;

    void csum(vector<int>& candidates,
              vector<int>& store,
              int target,
              int idx) {

        if (target == 0) {
            result.push_back(store);
            return;
        }

        if (idx == candidates.size() || target < 0) {
            return;
        }

        store.push_back(candidates[idx]);
        csum(candidates, store,
             target - candidates[idx],
             idx);

        store.pop_back();


        csum(candidates, store,
             target,
             idx + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                       int target) {

        vector<int> store;
        csum(candidates, store, target, 0);

        return result;
    }
};