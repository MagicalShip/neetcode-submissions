class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto e : tokens)
        {
            if(e == "+" || e == "-" || e == "*" || e == "/")
            {
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                if(e == "+")
                {
                    st.push(num1 + num2);
                }
                else if(e == "-")
                {
                    st.push(num1 - num2);
                }
                else if(e == "*")
                {
                    st.push(num1 * num2);
                }
                else
                {
                    st.push(num1 / num2);
                }
            }
            else
            {
                st.push(atoi(e.c_str()));
            }
        }
        return st.top();
    }
};
