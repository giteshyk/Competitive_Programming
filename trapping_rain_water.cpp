class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int left_max = 0;
        int right_max = 0;
        int answer = 0;
        
        while(left<right){
            if(height[left]<height[right]){
                height[left] >= left_max ? left_max = height[left] : 
                answer += left_max - height[left];
                ++left;
            }
            else{
                height[right] >= right_max ? right_max = height[right] :
                answer += right_max - height[right];
                --right;
            }
        }
        return answer;
    }
};
