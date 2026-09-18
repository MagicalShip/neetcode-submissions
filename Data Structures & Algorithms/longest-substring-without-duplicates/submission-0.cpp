class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> setc;
        int left = 0;
        int res = 0;
        for(int right = 0; right < s.size(); right++)
        {
            while(setc.find(s[right]) != setc.end())
            {
                setc.erase(s[left]);
                left++;
            }
            setc.insert(s[right]);
            res = max(res, right - left + 1);
        }
        return res;
    }
};
