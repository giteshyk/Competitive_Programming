class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0 , curr_max = 0;
        for(auto n : nums){
            if(n==1) max_count = max (++curr_max,max_count);
            else curr_max = 0;
        }
    return max_count;
    }
};
