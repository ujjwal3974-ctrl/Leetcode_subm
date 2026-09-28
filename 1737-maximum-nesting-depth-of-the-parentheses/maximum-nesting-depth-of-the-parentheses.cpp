class Solution {
public:
    int maxDepth(string s) {
        int counter = 0;
        int maxCounter = -1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') counter++;
            if(s[i] == ')') counter--;
            maxCounter = max(counter, maxCounter);
        }
        return maxCounter;
    }
};