class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //use two pointers here: 
        //find leftsum through a for loop. set maxsum = leftsum.
        // find rsum by subtracting k elements from lsum and adding k elements to rsum using rindex.
        // compute max of each side.

        int leftsum = 0, rightsum = 0, maxsum = 0;
        for(int i = 0; i<k; i++) leftsum += cardPoints[i];
        maxsum = leftsum;

        int rightindex = cardPoints.size()-1; //index value of rightmost array element.
        for(int i=k-1; i>=0; i--)
        {
            leftsum -= cardPoints[i];
            rightsum += cardPoints[rightindex];
            maxsum = max(maxsum, leftsum+rightsum);
            rightindex--;
        }
        return maxsum;
    }
};
