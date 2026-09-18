class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;
        for(auto &e : strs)
        {
            vector<int> v(26, 0);
            for(auto c : e)
            {
                v[c - 'a']++;
            }
            string key;
            for(int i = 0; i < 26; i++)
            {
                key += v[i] + ',';
            }
            m[key].push_back(e);
        }
        for(auto &e : m)
        {
            res.push_back(e.second);
        }
        return res;
    }
};
