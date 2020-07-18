class Solution {
  public:
    vector<int> xorQueries(vector<int>& arr,vecotr<int>& queries){
        vector<int> prefixXOR(arr.size()+1,0);
        vector<int> result;
        
        for(int i=0;i < arr.size();i++){
            prefixXOR[i+1] = prefixXOR[i] ^ arr[i];
        }
        
        for(vector<int>& temp:queries){
            result.push_back(prefixXOR[temp[0]]^prefixXOR[temp[1]+1]);
        }
    return result;
    }
};
