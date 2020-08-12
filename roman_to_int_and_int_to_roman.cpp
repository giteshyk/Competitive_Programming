//INTEGER TO ROMAN:

class Solution {
public:
    string intToRoman(int num) {
        string M[4]  = {"","M","MM","MMM"};
        string C[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string X[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string I[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        
        return M[num/1000] + C[(num/100) % 10] + X[(num/10) % 10] + I[num % 10];
    }
};

//ROMAN TO INTEGER:

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> romans = {{'I',1},
                                         {'V',5},
                                         {'X',10},
                                         {'L',50},
                                         {'C',100},
                                         {'D',500},
                                         {'M',1000}};
        
        int sum = romans[s.back()];
        
        for(int i = s.length() - 2; i >= 0 ; --i){
            if(romans[s[i]]<romans[s[i+1]])
                sum -= romans[s[i]];
            else
                sum += romans[s[i]];
        }
        return sum;
    }
};
