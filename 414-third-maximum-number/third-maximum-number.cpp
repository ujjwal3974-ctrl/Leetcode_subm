class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long maximum = LLONG_MIN;
        long long secondmax = LLONG_MIN;
        long long thirdmax = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++) {
            maximum = max(maximum, (long long)nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != maximum) {
                secondmax = max(secondmax, (long long)nums[i]);
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != maximum && nums[i] != secondmax) {
                thirdmax = max(thirdmax, (long long)nums[i]);
            }
        }

        if (thirdmax == LLONG_MIN) {
            return maximum;
        }

        return thirdmax;
    }
};