class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size()-1;
        for(int i = 0; i<n; i++){
            int greatest = INT_MIN;
            for(int j = i+1; j <= n; j++){
                greatest = max(greatest, arr[j]);
            }
            ans.push_back(greatest);
        }
        ans.push_back(-1);
        return ans;
    }
};