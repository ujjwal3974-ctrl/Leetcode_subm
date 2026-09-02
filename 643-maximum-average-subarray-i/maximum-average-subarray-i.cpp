class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;
        //made sliding window of k elements
        for(int i = 0; i<k; i++){
            windowSum+=nums[i];
        }
        int maxSum = windowSum;

        //add next eleemnt to k and remove 0th element, find maximumsum and return it.
        for(int right = k; right<nums.size(); right++){
            windowSum += nums[right];
            windowSum -= nums[right-k];
            maxSum = max(windowSum, maxSum);
        }
        return (double)maxSum/k;
    }
};