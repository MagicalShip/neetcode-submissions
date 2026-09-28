class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
        {
            return 1;
        }
        else if(n == 2)
        {
            return 2;
        }
        else
        {
            int m1 = 1, m2 = 2;
            for(int i = 3; i <= n; i++)
            {
                int tmp = m2;
                m2 = m1+m2;
                m1 = tmp;
            }
            return m2;
        }
        return -1;
    }
};
