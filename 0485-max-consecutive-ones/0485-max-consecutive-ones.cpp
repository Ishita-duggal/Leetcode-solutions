class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0, right = 0, maxlen = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
            {
                int left = i;
                int right = i;
                break;
            }
        }

        while(right<n)
        {
            if(nums[right] == 1)
            {
                maxlen = max(maxlen, right-left+1);
                right++;
            }
            else
            {
                left = right+1;
                right++;
            }
        }
        return maxlen;
    }
};