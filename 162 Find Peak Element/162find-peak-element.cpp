class Solution
{
public:
    int findPeakElement(vector<int>& nums)
    {
        int n=nums.size();
        if(n==1) return 0;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int leftEle=(mid-1)>=0?nums[mid-1]:INT_MIN;
            int rightEle=(mid+1)<n?nums[mid+1]:INT_MIN;
            if((leftEle < nums[mid]) &&  (rightEle<nums[mid]))
            {
                return mid;
            }
            else if(nums[mid]<rightEle)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
    }
};