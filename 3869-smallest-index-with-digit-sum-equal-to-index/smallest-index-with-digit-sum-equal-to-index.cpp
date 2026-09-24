class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i], sumd = 0;
            while(n>0){
                int d = n%10;
                sumd+=d;
                n/=10;
            }
            if(sumd == i){
                return i;
            }
        }
        return -1;
    }
};