class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(auto &op:operations)
        {
            if(op=="+")
            {
                int oldTop=st.top();
                st.pop();
                int newTop = oldTop + st.top();
                st.push(oldTop);
                st.push(newTop);
            }
            else if(op=="C")
            {
                st.pop();
            }
            else if(op == "D")
            {
                int dbel = 2*st.top();
                st.push(dbel);
            }
            else
            {
                st.push(stoi(op));
            }
        }
        int ans = 0;
        while(!st.empty())
        {
            ans = ans+st.top();
            st.pop();
        }

        return ans;
    }
};