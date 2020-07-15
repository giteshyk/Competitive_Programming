class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int i = nums.size() - 2;
      
        while(i>=0 && nums[i+1] <= nums[i])
            i--;                                //Desired Index
        
        if(i>=0){
            int j = nums.size() - 1;
        
            while(j>=0 && nums[j] <= nums[i])
                j--;                            //Index of the element just bigger than Desired                                                   Index
        
        swap(nums[i],nums[j]);                  //Swap them
        }
    
    reverse(nums.begin()+i+1,nums.end()); //we will swap everything after our desired index to                                              get the next bigger permutation
    }
};
