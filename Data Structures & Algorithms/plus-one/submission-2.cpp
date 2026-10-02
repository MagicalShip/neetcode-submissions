class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        long num = 0;
        for(auto e : digits)
        {
            num = num * 10 + e;
        }
        num++;
        n = digits.size();
        if(num / int(pow(10, n)) > 0)
        {
            n++;
        }
        vector<int> res;
        while(n)
        {
            res.push_back(num / pow(10, n - 1));
            num = num % int(pow(10, n - 1));
            n--;
        }
        return res;
    }
};
