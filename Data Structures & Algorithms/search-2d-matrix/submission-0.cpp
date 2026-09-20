class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size() * matrix[0].size() - 1;
        while(l <= r)
        {
            int mid = l + (r - l)/2;
            int i = mid / matrix[0].size();
            int j = mid % matrix[0].size();
            if(matrix[i][j] > target)
            {
                r = mid - 1;
            }
            else if(matrix[i][j] < target)
            {
                l = mid + 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
