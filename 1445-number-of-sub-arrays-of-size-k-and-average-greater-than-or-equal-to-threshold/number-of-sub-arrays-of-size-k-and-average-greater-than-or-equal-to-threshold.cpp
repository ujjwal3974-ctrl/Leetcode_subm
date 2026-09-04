class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int windowSum = 0, count = 0;
        for(int i = 0; i<k; i++){
            windowSum+=arr[i];
        }
        if(windowSum >= (long)threshold*k) count++;
        for(int i = k; i < arr.size(); i++){
            windowSum+=arr[i];
            windowSum-=arr[i-k];
            if(windowSum >= (long)threshold*k) count++;
        }
        return count;
    }
};