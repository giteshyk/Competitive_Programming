class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> res;
        if(intervals.size()==0)
            return res;
        
        vector<int>app = {intervals[0][0] , intervals[0][1] };
        res.push_back(app);
        
        for(int i = 1 ; i<intervals.size();i++)
        {
            vector<int> lastt = res.back();
            int strt = intervals[i][0];
            int endd = intervals[i][1];
            
            if(strt<=lastt[1])
            {
                if(endd>lastt[1])
                     res.back()[1] = endd;
            }
            else
            {
                res.push_back({intervals[i][0],intervals[i][1]});
            }    
        }
        
        return res;
    }
};
