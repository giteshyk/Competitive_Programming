class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        if(s.empty()) return res;
        
        vector<string> path;
        partition(s,0,path,res);
        
        return res;
    }
    
    bool isPalindrome(string &s,int start,int end){
        while(start<=end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    } 
private:
    void partition(string &s,int begin,vector<string> &path,vector<vector<string>> &res){
        if(s.size()==begin){
            res.push_back(path);
            return;
        }
        for(int i = begin; i < s.size(); ++i){
            if(isPalindrome(s,begin,i)){
                path.push_back(s.substr(begin,i-begin+1));
                partition(s,i+1,path,res);
                path.pop_back();
            }
        }
    }
};
