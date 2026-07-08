class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0,r=0;

        unordered_map<int,int> mp;
        int max_len=INT_MIN;
        while(r<n)
        {
            mp[fruits[r]]++;
            while(mp.size()>2)
            {
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
            max_len = max(max_len,r-l+1);
            r++;
        }
        return max_len;
    }
};