class Solution {
  public:
    int uniquePaths(int m,int n) {
        
        long result;
        int j = 1;
        
        if(m==1 || n==1)
            return 1;
            
        m--;
        n--;
        
        if(m<n){
            m = m+n;
            n = m-n;
            m = m-n;
        }
        
        
        for(int i=m+1; i <= m+n; i++,j++){
            result *= i;
            result /= j;
        }
    
    return (int)result;
    
    }
    
};
