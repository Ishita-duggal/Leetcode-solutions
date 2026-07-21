class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const auto& token:tokens)
        {
            if(token.size() > 1 || isdigit(token[0]))
            {
                st.push(stoi(token));
            }

            else
            {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();

                if(token[0] == '+')
                {
                    st.push(first + second);
                }
                else if (token[0] == '-')
                {
                    st.push(first - second);
                }
                else if(token[0] == '*')
                {
                    st.push(first * second);
                }
                else if(token[0] == '/')
                {
                    st.push(first/second);
                }
            }
        }
        return st.top();
    }
};