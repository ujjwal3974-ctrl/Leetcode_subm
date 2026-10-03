class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }
        
        unordered_set<int> seenFreq;

        for(auto pair: freq){
            int count = pair.second;
            if(seenFreq.count(count) > 0){
                return false;
            }
            seenFreq.insert(count);
        }
        return true;
    }
};