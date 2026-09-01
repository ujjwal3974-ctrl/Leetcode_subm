class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> maxS;
        for(int i = 0; i<accounts.size(); i++){
            int sum = 0;
            for(int j = 0; j<accounts[0].size(); j++){
                sum += accounts[i][j];
                maxS.push_back(sum);
                
            }
        }
        int maximum = INT_MIN;
        for(int i = 0; i < maxS.size(); i++){
            if(maxS[i]>maximum) maximum = maxS[i];
        }
        return maximum;
    }
};