class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = (1 + nums.size()) * nums.size() / 2;
        for(auto e : nums)
        {
            sum -= e;
        }
        return sum;
    }
};
