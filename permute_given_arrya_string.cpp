class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        
        permuteRecursive(nums,0,result);
        
        return result;
    }


    void permuteRecursive(vector<int> &nums,int begin,vector<vector<int>> &result){
    if(begin >= nums.size()){
        result.push_back(nums);
    }
    
    for(int i=begin;i<nums.size();i++){
        swap(nums[begin],nums[i]);
        permuteRecursive(nums,begin+1,result);
        swap(nums[begin],nums[i]);
    }
}
    
};
