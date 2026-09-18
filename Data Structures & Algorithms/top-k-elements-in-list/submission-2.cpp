class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(auto e : nums)
        {
            m[e]++;
        }
        vector<vector<int>> v(nums.size() + 1);
        for(auto &e : m)
        {
            v[e.second].push_back(e.first);
        }
        vector<int> res;
        for(int i = v.size()-1; i >=0 ; i--)
        {
            if(v[i].size() > 0)
            {
                for(int j = 0; j < v[i].size(); j++)
                {
                    res.push_back(v[i][j]);
                    if(res.size() == k)
                    {
                        return res;
                    }
                }
            }
        }
        return {};
    }
};
