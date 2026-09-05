class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int maximum = INT_MIN, minimum = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            maximum = max(maximum, nums[i]);
            minimum = min(minimum, nums[i]);
        }
        sort(nums.begin(), nums.end());
        int i = 0;
        for(int j = minimum; j<=maximum; j++){
            if(nums[i] == j){
                i++;
            }
            else{               
                ans.push_back(j);
            }
        }
        return ans;
    }
};