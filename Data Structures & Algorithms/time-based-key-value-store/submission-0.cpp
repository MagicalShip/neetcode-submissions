class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back(make_pair(timestamp, value));
    }
    
    string get(string key, int timestamp) {
        auto& v = m[key];
        if(v.empty())
        {
            return "";
        }
        int left = 0, right = v.size() - 1;
        string res = "";
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            int time = v[mid].first;
            if(time <= timestamp)
            {
                res = v[mid].second;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return res;
    }
};
