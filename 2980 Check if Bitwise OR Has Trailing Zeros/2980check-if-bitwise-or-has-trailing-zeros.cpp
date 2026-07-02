class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int ctr = 0;

        for(int i:nums)
        {
            if(i%2 == 0)
            {
                ctr++;
            }
            if(ctr>=2)
            {
                return(true);
                break;
            }
        }
        return(false);
    }
};