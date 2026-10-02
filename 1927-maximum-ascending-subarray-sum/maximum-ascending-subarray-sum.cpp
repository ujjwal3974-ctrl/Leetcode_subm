class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currSum = nums[0], maxSum = nums[0];
        if(nums.size() == 1) return nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] < nums[i]){
                currSum += nums[i];
            }else{
                currSum = nums[i];
            }
            maxSum = max(currSum, maxSum);
        }
        return maxSum;
    }
};