class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxlen = 0;
        for(auto e : s)
        {
            if(!s.count(e - 1))
            {
                int len = 1;
                while(s.count(e + len))
                {
                    len++;
                }
                maxlen = std::max(maxlen, len);
            }
        }
        return maxlen;
    }
};
