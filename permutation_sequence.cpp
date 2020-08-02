class Solution {
public:
    string getPermutation(int n, int k) {
        int i,f=1,j;
        
        string s(n,'0');
        
        for(int i=1;i<=n;i++){
            f *= i;
            s[i-1] += i;
        }
        
        for(i=0,k--; i<n;i++){
            f /= n-i;
            j = i+k/f;
            
            char c = s[j];
            
            for(j;j>i;j--)
                s[j] = s[j-1];
            
            k%=f;
            
            s[i] = c;
        }
    return s;    
    }
};
