class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(hash[nums[i]] == 1) sum+=nums[i];
        }
        return sum;
    }
};