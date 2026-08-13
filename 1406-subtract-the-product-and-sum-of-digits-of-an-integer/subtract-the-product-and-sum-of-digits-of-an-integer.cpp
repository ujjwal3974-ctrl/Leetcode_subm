class Solution {
public:
    int subtractProductAndSum(int n) {
        long long product = 1, sum = 0;
        while(n>0){
            long long digit = n%10;
            product *= digit;
            sum+=digit;
            n/=10;
        }
        return int(product - sum);
    }
};