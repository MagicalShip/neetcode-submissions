class Solution {
public:
    int robhelp(vector<int>& nums, int left, int right)
    {
        if(left > right)
        {
            return 0;
        }
        if(left == right)
        {
            return nums[left];
        }
        int dp0 = nums[left];
        int dp1 = max(nums[left], nums[left + 1]);
        for(int index = left + 2; index <= right; index++)
        {
            int curmax = std::max(dp1, dp0 + nums[index]);
            dp0 = std::max(dp0, dp1);
            dp1 = curmax;
        }
        return dp1;
    }
    int rob(vector<int>& nums) {
        return std::max(robhelp(nums, 1, nums.size() - 1), robhelp(nums, 2, nums.size() - 2) + nums[0]);
    }
};
