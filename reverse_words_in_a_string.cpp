class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = 0, l = 0;
        int len = s.length();
        int wordcount = 0;
        
        while(true){
            while(i < len && s[i] == ' ')
                i++;
            if(i == len)
                break;
            if(wordcount)
                s[j++] = ' ';
            l = j;
            while(i < len && s[i] != ' '){
                s[j++] = s[i++];
            }
            reverseWord(s,l,j-1);
            wordcount++;
        }
        s.resize(j);
        reverseWord(s,0,j-1);
        return s;
    }
    void reverseWord(string &s,int i,int j){
        while(i<j){
            char t = s[i];
            s[i++] = s[j];
            s[j--] = t;
        }
    }
};
