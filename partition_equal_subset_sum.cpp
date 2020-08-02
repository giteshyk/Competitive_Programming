class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            sum += nums[i];
        }
        if(sum%2) return false; //Cant be odd
        
        sum /= 2; //desired sum
        sort(nums.rbegin(),nums.rend());
        
        return helper(nums,sum,0);
    }
    bool helper(vector<int> &nums,int sum,int begin){
        if(begin >= nums.size()) return false;
        if(sum == nums[begin]) return true;
        if(sum < nums[begin]) return false;
        return helper(nums,sum-nums[begin],begin + 1) || helper(nums,sum,begin+1);
    }
};
