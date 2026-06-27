class Solution {
public:
    int LeftOcc (vector<int>& nums, int target, int size)
    {
        int start = 0; 
        int end = size - 1;
        int mid = start + (end-start)/2;
        int left = -1;

        while(start<=end)
        {
            if(nums[mid] == target)
            {
                left = mid;
                end = mid-1;
            }
            else if(nums[mid] >target){
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
            mid = start + (end - start)/2;
        }
        return left;
    }

    int RightOcc (vector<int>& nums, int target, int size)
    {
        int start = 0; 
        int end = size - 1;
        int mid = start + (end-start)/2;
        int right = -1;

        while(start<=end)
        {
            if(nums[mid] == target)
            {
                right = mid;
                start = mid+1;
            }
            else if(nums[mid] >target){
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return right;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int Left = LeftOcc(nums, target, n);
        int Right = RightOcc(nums, target, n);
        return{Left, Right};
    }
};