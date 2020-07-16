class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());        //first reverse it (if you reverse it column wise then swap will rotate the matrix anti-clockwise)
        
        for(int i=0;i<matrix.size();i++){            //then swap the symmetry
           for(int j=0;j<i;j++)
               swap(matrix[i][j],matrix[j][i]);
        }
    }
};
