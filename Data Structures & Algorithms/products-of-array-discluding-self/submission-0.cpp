class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mleft = 1, mright = 1;
        int len = nums.size();
        vector<int> res(len, 1);
        for(int i = 0, j = len-1 ; i < nums.size(); i++, j--)
        {
            res[i] *= mleft;
            res[j] *= mright;
            mleft *= nums[i];
            mright *= nums[j];
        }
        return res;
    }
};
