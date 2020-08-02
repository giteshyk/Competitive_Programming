class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> res;
        
        sort(candidates.begin(),candidates.end());
        
        combinationSum(candidates,target,combination,res,0);
        
        return res;
    }
private:
    void combinationSum(vector<int> &candidates,int target,
                        vector<int> &combination,vector<vector<int>> &res,int begin){
        
        if(!target){
            res.push_back(combination);
        }
        
        for(int i = begin; i != candidates.size() && target >= candidates[i]; ++i){
            combination.push_back(candidates[i]);
            combinationSum(candidates,target - candidates[i],combination,res,i); 
            //i+1 if you don't want a candidate repeated to get the target sum
            combination.pop_back();
        }
    }
};
