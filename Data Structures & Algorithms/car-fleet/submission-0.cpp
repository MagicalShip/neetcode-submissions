class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> v;
        int n = position.size();
        for(int i = 0; i < n; i++)
        {
            v.push_back(make_pair(position[i], speed[i]));
        }
        sort(v.rbegin(), v.rend());
        vector<double> vd;
        for(int i = 0; i < n; i++)
        {
            double t = (double)(target - v[i].first) / v[i].second;
            vd.push_back(t);
            if(vd.size() >= 2 && vd.back() <= vd[vd.size() - 2])
            {
                vd.pop_back();
            }
        }
        return vd.size();
    }
};
