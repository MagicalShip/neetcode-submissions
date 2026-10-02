class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        int max1 = nums[0];
        int max2 = nums[1];
        if(nums.size() == 2)
        {
            return std::max(max1, max2);
        }
        for(int i = 2; i < nums.size(); i++)
        {
            int curmax = std::max(max1 + nums[i], max2);
            max1 = max(max2, max1);
            max2 = curmax;
        }
        return max2;
    }
};
