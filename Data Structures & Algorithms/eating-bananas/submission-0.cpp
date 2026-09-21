class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int minspeed = 1;
        int maxspeed = 1;
        for(auto e : piles)
        {
            maxspeed = std::max(e, maxspeed);
        }
        while(minspeed < maxspeed)
        {
            int midspeed = minspeed + (maxspeed - minspeed) / 2;
            int needtime = 0;
            for(auto e : piles)
            {
                needtime += (e + midspeed - 1) / midspeed;
            }
            if(needtime > h)
            {
                minspeed  = midspeed + 1;
            }
            else
            {
                maxspeed = midspeed;
            }
        }
        return minspeed;
    }
};
