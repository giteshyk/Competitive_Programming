class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestprefix = "";
        
        if(strs.empty() || strs.size() == 0)
            return longestprefix;
        
        int index = 0;
        
        for(char c : strs[0]){
            for(int i = 1; i < strs.size(); i++){
                if(index >= strs[i].length() || c != strs[i][index])
                    return longestprefix;
            }
            longestprefix += c;
            index++;
        }
        return longestprefix;
    }
};
