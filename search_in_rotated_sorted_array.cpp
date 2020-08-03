class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size() - 1;
        
        while(low < high){
            
            int mid = (low+mid)/2;
            
            double num = (nums[mid]<nums[0]==target <nums[0]) ? nums[mid]:
                    target < nums[0] ? -INFINITY : INFINITY;
            
            if(num < target)
                low = mid + 1;
            else if(num > target)
                high = mid;
            else 
                return mid;
        }
        return -1;
    }
};
