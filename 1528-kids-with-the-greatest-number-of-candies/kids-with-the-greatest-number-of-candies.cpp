class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = INT_MIN;
        vector<bool> ans(candies.size());

        for(int i = 0; i < candies.size(); i++){
            maximum = max(maximum, candies[i]);
        }
        for(int i = 0; i < candies.size(); i++){
            ans[i] = (candies[i]+extraCandies >= maximum);
            
        }
        return ans;

    }
};