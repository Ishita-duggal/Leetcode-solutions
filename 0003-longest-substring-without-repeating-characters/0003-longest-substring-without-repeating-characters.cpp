class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int n = s.size();
        int left = 0, right = 0, maxlen = 0;

        while(right < n)
        {
            if(hash[s[right]] != -1)
            {
                left = max(left, hash[s[right]] + 1);
            }
            hash[s[right]] = right;
            int len = right - left + 1;
            maxlen = max(len,maxlen);
            right++;
        }

        return maxlen;
    }
};