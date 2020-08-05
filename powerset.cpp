class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int p = 1 << nums.size();
        vector<vector<int>> subsets(p);
        
        for(int i = 0; i < p;i++){
          for(int j = 0; j< nums.size();j++){
            if((i >> j) & 1){
              subsets[i].push_back(nums[j]);
            }
          }
        }
        return subsets;
    }
};
