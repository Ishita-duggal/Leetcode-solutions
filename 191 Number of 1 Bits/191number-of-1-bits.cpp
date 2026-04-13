class Solution {
public:
    int hammingWeight(int n) {
        int ct = 0;
        while(n!=0){
            //to check the last bit
            if(n&1){
                ct++;
            }
            n = n>>1;
        }
        return(ct);
    }
};