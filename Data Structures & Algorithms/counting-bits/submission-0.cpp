class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i = 0; i<=n ; i++)
        {
            int num = i;
            int m = 0;
            while(num)
            {
                num &= (num - 1);
                m++;
            }
            res.push_back(m);
        }
        return res;
    }
};
