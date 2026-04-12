class Solution {
public:
    int sum = 0;
    int prod = 1;
    int subtractProductAndSum(int n) {
       while(n!=0){
        int r = n%10;
        n=n/10;
        sum += r;
        prod *= r;
        } 
        return(prod-sum);
    }
};