class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        
        long end = labs(dividend);
        long sor = labs(divisor);
        long answer = 0;
        
        int sign = (divisor>0 ^ dividend>0)?-1:1;
        
        while(sor <= end){
            long temp = sor;
            long quot = 1;
            
            while((temp<<1) <= end){
                temp <<= 1;
                quot <<= 1;
            }
            answer += quot;
            end -= temp;
        }
        return sign*answer;
    }
};
