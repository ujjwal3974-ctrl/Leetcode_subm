class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]>maximum) maximum = max(nums[i], maximum);
            if(nums[i]<minimum) minimum =min(nums[i], minimum);
        }
        int miniPos = 0, maxPos = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == maximum) maxPos = i;
            if(nums[i] == minimum) miniPos = i;
        }
        int cntf = max(maxPos, miniPos) + 1;
        int cntb = nums.size() - min(maxPos, miniPos);
        int cntfb = min(maxPos, miniPos) + 1 
        + nums.size() - max(maxPos, miniPos);
        
        return min({cntf, cntb, cntfb});        
    }
};