class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int high = INT_MIN, sHigh = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>=high){
                sHigh=high;
                high=nums[i];
            }else if(nums[i] > sHigh){
                sHigh = nums[i];
            }          

        }
        return (sHigh-1)*(high-1);
    }
};