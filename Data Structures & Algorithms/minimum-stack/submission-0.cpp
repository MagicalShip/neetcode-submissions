class MinStack {
public:
    vector<int> v;
    vector<int> vmin;
    MinStack() {
        vmin = {INT_MAX};
    }
    
    void push(int val) {
        v.push_back(val);
        if(val < vmin[v.size() - 1])
        {
            vmin.push_back(val);
        }
        else
        {
            vmin.push_back(vmin[v.size() - 1]);
        }
    }
    
    void pop() {
        if(v.empty())
        {
            return ;
        }
        v.pop_back();
        vmin.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return vmin[v.size()];
    }
};
