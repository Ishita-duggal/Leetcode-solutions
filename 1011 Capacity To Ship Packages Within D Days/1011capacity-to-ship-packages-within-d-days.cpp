class Solution 
{
public:
    int fn(int cap,vector<int> &weights)
    {
        int n=weights.size();
        int days=1;
        int prevWeight=0;
        for(int i=0;i<n;i++)
        {
            if(prevWeight+weights[i]<=cap)
            {
                prevWeight=prevWeight+weights[i];
            }
            else
            {
                prevWeight=weights[i];
                days++;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);

        int ans=high;
        while(low<=high)
        {
            int cap=low+(high-low)/2;
            int tempAns=fn(cap,weights);
            if(tempAns<=days)
            {
                ans=cap;
                high=cap-1;
            }
            else
            {
                low=cap+1;
            }
        }
        return ans;
    }
};
