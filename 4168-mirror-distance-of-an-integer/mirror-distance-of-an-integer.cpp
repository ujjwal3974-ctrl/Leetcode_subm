class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int tempn = n;
        while(tempn>0){
            rev = (rev*10) + tempn % 10;
            tempn /= 10;
        }
        return abs(n - rev);
    }
};