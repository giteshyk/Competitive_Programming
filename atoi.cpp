class Solution {
public:
    int myAtoi(string str) {
       int i = str.find_first_not_of(' ');
        
        if(str.empty() || i == -1)
            return 0;
        
        int ret = 0;
        int sign = 1;
        
        int base = INT_MAX/10;
        
        if(str[i] == '+' || str[i] == '-')
            sign = (str[i++] == '+') ? 1 : -1;
        
        while(isdigit(str[i])){
            if(ret>base || (ret == base && str[i] - '0' > 7))
                return sign>0?INT_MAX:INT_MIN;
            
            ret = 10*ret + (str[i++] - '0');
        }
        return sign*ret;
    }
};
