class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int len = s.length();
        bool *dict_pos = new bool[len+1];
        
        for(int i=0;i<=len;i++) dict_pos[i] = false;
        
        dict_pos[0] = true;
        
        for(int i=1;i<=len;i++){
            for(int j=1;j<=i;j++){
                string tmp = s.substr(i-j,j);
                if(find(wordDict.begin(),wordDict.end(),tmp) != wordDict.end()){
                    dict_pos[i] = dict_pos[i-j] ;
                    if(dict_pos[i]){
                        break;
                    }
                }
            }
        }  
        bool res = dict_pos[len];
        delete []dict_pos;
        
        return res;
    }
};
