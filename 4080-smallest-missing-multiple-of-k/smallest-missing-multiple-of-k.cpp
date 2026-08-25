class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> prodA;

        int i, j, prod = k;

        int n = nums.size();
        for (i = 1; i <= n + 1; i++) {
            prodA.push_back(prod * i);
        }
        sort(nums.begin(), nums.end());
        for (i = 0; i < prodA.size(); i++) {
            int count = 0;
            for (j = 0; j < n; j++) {
                if (nums[j] == prodA[i]) {
                    count++;
                    break;
                }
            }
            if (count == 0)
                return prodA[i];
        }
        return -1;
    }
};