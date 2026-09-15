class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res = 0;
        int i = 0;
        while(i<nums.size()){
            res^=nums[i];
            i++;
        }
        return res;
    }
};