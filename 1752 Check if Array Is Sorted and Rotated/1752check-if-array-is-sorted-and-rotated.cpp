class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int ctr = 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
            {
                ctr++;
            }
        }
        //comparing if last element is greater than the first element:
        if(nums[n-1]>nums[0])
        {
            ctr++;
        }

        //using >= for the edge case where all elements are equal therefor counter never exceeds 0
        return ctr<=1;
    }
};