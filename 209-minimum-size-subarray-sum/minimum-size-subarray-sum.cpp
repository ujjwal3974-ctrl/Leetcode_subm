class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, minlen = INT_MAX;
        for(int right = 0; right<nums.size(); right++){
            sum+=nums[right];
            
            while(sum>=target){
                int currlen = right - left + 1;
                minlen = min(minlen, currlen);
                sum-=nums[left];
                left++;                
            }
        }
        if(minlen == INT_MAX) minlen = 0;
        return minlen;
    }
};