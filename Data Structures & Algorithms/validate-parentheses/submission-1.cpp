class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto e : s)
        {
            if(e == '(' || e == '[' || e == '{')
            {
                st.push(e);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                if(e == ')' && st.top() != '(')
                {
                    return false;            
                }
                else if(e == ']' && st.top() != '[')
                {
                    return false;
                }
                else if(e == '}' && st.top() != '{')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};
