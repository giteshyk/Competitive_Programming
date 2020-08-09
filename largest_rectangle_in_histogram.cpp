class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0;
        heights.push_back(0); //Handle single element
        int N = heights.size();
        stack<int> stck;
        
        for(int i = 0; i < N; ++i){
            while(!stck.empty() && heights[i] < heights[stck.top()]){
                int top = stck.top();
                stck.pop();
                
                res = max(res,heights[top] * (stck.empty() ? i : i - stck.top() - 1));
            }
            stck.push(i);
        }
        return res;
    }
};
