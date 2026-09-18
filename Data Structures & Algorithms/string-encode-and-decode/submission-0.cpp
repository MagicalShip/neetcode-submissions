class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(auto e : strs)
        {
            res += to_string(e.size());
            res += "#";
            res += e;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        for(int i = 0; i < s.size(); i++)
        {
            int j = i;
            while(s[j] != '#')
            {
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            string curs = s.substr(j+1, len);
            res.push_back(curs);
            i = j + len;
        }
        return res;
    }
};
