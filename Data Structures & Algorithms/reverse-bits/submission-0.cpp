class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        vector<int> v(32,0);
        int num = 32;
        while(num--)
        {
            v[num] = n % 2;
            n = n >> 1;
        }
        num = 32;
        while(num--)
        {
            res += v[num] << num;
        }
        return res;
    }
};
