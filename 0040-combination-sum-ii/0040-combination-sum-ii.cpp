class Solution {
public:
    vector<vector<int>> result;

    void combisum(vector<int>& candidates,vector<int>& temp,int idx,int target){

        if(target == 0){
            result.push_back(temp);
            return;
        }

        if(idx == candidates.size())
            return;

        if(candidates[idx] <= target){
            temp.push_back(candidates[idx]);
            combisum(candidates, temp, idx + 1,
                     target - candidates[idx]);
            temp.pop_back();
        }

        int next = idx + 1;
        while(next < candidates.size() &&
            candidates[next] == candidates[idx])
            next++;

        combisum(candidates, temp, next, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<int> temp;
        combisum(candidates, temp, 0, target);

        return result;
    }
};