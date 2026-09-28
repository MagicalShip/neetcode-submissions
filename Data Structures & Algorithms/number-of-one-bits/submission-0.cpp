class Solution {
public:
    int hammingWeight(uint32_t n) {
        int num = 0;
        while(n)
        {
            if(n % 2 == 1)
            {
                num ++;
            }
            n /= 2;
        }
        return num;
    }
};
