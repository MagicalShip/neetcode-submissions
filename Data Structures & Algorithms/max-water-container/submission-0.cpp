class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int maxnum = INT_MIN;
        while(left < right)
        {
            int curnum = (right - left) * std::min(heights[left], heights[right]);
            maxnum = std::max(maxnum, curnum);
            if(heights[left] < heights[right])
            {
                left ++;
            }
            else
            {
                right --;
            }
        }
        return maxnum;
    }
};
