class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int used_row[9][9] = {0};
        int used_column[9][9] = {0};
        int used_subbox[9][9] = {0};
        
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '0' - 1; // we will use numbers form 0 to 8
                    int k = i/3*3 + j/3 ;            // respective sub_box
                    
                    if(used_row[i][num] || used_column[j][num] || used_subbox[k][num])
                        return false;
                    
                    used_row[i][num] = used_column[j][num] = used_subbox[k][num] = 1;
                }
            }
        }
        return true;
    }
};
