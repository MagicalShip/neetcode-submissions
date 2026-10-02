class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        int max1 = nums[0];
        int max2 = max(nums[1], nums[0]);
        for(int i = 2; i < nums.size(); i++)
        {
            int curmax = std::max(max1 + nums[i], max2);
            max1 = max(max2, max1);
            max2 = curmax;
        }
        return max2;
    }
};
