class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0};
        int col[9][9] = {0};
        int boxes[3][3][9] = {0};
        for(int i = 0; i < 9 ; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
                int index = board[i][j] - '1';
                row[i][index] += 1;
                col[j][index] += 1;
                boxes[i/3][j/3][index] += 1;
                if(row[i][index] > 1 || col[j][index] > 1 || boxes[i/3][j/3][index] > 1)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
