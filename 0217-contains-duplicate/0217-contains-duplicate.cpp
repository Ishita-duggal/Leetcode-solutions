class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> hmap;
        for (int i=0;i<nums.size();i++)
        {
           
            if (hmap.count(nums[i]) == 1) return true;
            else  hmap.insert(nums[i]);

        }

        return false;


    }
};