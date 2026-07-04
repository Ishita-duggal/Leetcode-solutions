class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        vector<int> con;

        for(int i =0;i<nums.size();i++)
        {
            con.push_back(nums[i]);
        }

        
        for(int i =nums.size()-1;i>=0;i--)
        {
            con.push_back(nums[i]);
        }
        return(con);
    }
};