class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.size() == 1) return 0;
        int n = nums.size();
        for(int i = 0; i<nums.size(); i++){
            int maximum = INT_MIN, minimum = INT_MAX;
            for(int j = 0; j<=i; j++){
                maximum = max(maximum, nums[j]);
            }
            for(int l = i; l<n; l++){
                minimum = min(minimum, nums[l]);
            }
            int insScore = maximum - minimum;
            if(insScore<=k) return i;
        }
        
        return -1;        
    }
};