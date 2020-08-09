class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> has_greater;
        stack<int> stck;
        vector<int> result;
        
        for(int i = nums2.size() - 1; i >= 0; --i){
            if(stck.empty())
                has_greater[nums2[i]] = -1;
            else if(!stck.empty() && stck.top() > nums2[i])
                has_greater[nums2[i]] = stck.top();
            else if(!stck.empty() && stck.top() <= nums2[i]){
                while(!stck.empty() && stck.top() <= nums2[i])
                    stck.pop();
                if(stck.empty())
                    has_greater[nums2[i]] = -1;
                else
                    has_greater[nums2[i]] = stck.top(); //NEXT greater one
            }
            stck.push(nums2[i]);
        }
        for(int it : nums1)
            result.push_back(has_greater[it]);
        
        return result;
    }  
};
