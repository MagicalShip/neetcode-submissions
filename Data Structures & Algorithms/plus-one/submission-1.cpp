class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        long num = 0;
        for(auto e : digits)
        {
            cout << num << " " << e << endl;
            num = num * 10 + e;
            cout << num <<endl;
        }
        num++;
        n = digits.size();
        cout << num << " " << n << endl;
        if(num / int(pow(10, n)) > 0)
        {
            cout << num / pow(10, n) << endl;
            n++;
        }
        cout << n ;
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
