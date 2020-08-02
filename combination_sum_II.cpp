class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> res;
        
        sort(candidates.begin(),candidates.end());
        combinationSum2(candidates,target,combination,res,0);
        return res;
    }
private:
    void combinationSum2(vector<int> &candidates,int target,
                                        vector<int> &combination,
                                        vector<vector<int>> &res,int begin){
        if(!target){
            res.push_back(combination);
            return;
        }
        
        for(int i = begin; i != candidates.size() && target >= candidates[i]; ++i){
            if(i > begin && candidates[i] == candidates[i-1]) continue; /** skip duplicates */
            combination.push_back(candidates[i]);
            combinationSum2(candidates,target - candidates[i],combination,res,i+1);
            combination.pop_back();
        }
    }
};
