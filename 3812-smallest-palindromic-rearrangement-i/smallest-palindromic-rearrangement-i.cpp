class Solution {
public:
    string smallestPalindrome(string s) {
        
        int slen = s.length();
        sort(s.begin(), s.begin()+(slen/2));
        for(int i = 0; i < slen/2; i++){
            s[slen-1-i] = s[i];
        }


        return s;
    }
};