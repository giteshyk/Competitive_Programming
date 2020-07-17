class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> hash_map;
        int result = 0;
        
        for(int i:nums){
            if(hash_map[i])
                continue;
            result = max(result,hash_map[i]=hash_map[i + hash_map[i+1]]=
                                            hash_map[i - hash_map[i-1]]=
                                            hash_map[i+1]+hash_map[i-1]+1);
        }
        return result;
    }
};
