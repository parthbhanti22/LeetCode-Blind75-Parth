class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool seenRow[9][9] = {false};
        bool seenCol[9][9] = {false};
        bool seenBox[9][9] = {false};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '1';

                    int k = (i/3)*3+(j/3);
                    if (seenRow[i][num] || seenCol[j][num] || seenBox[k][num]) {
                        return false;
                    }

                    seenRow[i][num] = true;
                    seenCol[j][num] = true;
                    seenBox[k][num] = true;
                }
            }
        }

        return true;
        
    }
};