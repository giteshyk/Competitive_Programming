class Solution {
public:
  int subarraySum(vector<int> nums,int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int,int> hash_map;
        
        hash_map[0]++;
        
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            
            if(hash_map[sum - k]){
            count += hash_map[sum - k];
            }
                
            hash_map[sum]++;
        }
        return count;
  }
};
  
