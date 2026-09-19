class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
        {
            return false;
        }
        map<char, int> m1;
        for(auto e: s1)
        {
            m1[e]++;
        }
        for(int i = 0; i <= s2.size() - s1.size(); i++)
        {
            map<char, int> m2;
            for(int j = i; j < i + s1.size(); j++)
            {
                m2[s2[j]]++;
            }
            if(m1 == m2)
            {
                return true;
            }
        }
        return false;
    }
};
