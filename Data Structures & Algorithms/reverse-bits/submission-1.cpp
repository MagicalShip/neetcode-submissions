class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        int num = 32;
        while(num--)
        {
            int t = n % 2;
            n = n >> 1;
            res += t << num;
        }
        return res;
    }
};
