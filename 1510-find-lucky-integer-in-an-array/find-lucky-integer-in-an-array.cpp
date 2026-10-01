class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }
        
        int largest = -1;
        for(int i = 0; i < arr.size(); i++){
            if(freq[arr[i]] == arr[i]){
                if(arr[i] > largest){
                    largest = arr[i];
                }
            }
        }
        return largest;
    }
};