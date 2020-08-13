class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
    }

//Approach 2
    bool isAnagram2(string s, string t){
        if(s.length() != t.length())
            return false;
        
        int n = s.length();
        int count[26] = {0};
        
        for(int i = 0; i < n; ++i){
                count[s[i] - 'a']++;
                count[t[i] - 'a']--;
        }
        
        for(int i = 0; i < 26; ++i){
                if(count[i])
                        return false;
        }
     return true;
    }
};
