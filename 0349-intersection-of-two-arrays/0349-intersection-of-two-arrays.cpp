class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> num1(nums1.begin(),nums1.end());
        unordered_set<int> intersection;

        for(int num: nums2)
        {
            if(num1.count(num)) intersection.insert(num);
        }

        return vector<int>(intersection.begin(), intersection.end());
    }
};