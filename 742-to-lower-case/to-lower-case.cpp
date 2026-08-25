class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i< s.length(); i++){
            if((int)s[i] > 64 && (int)s[i] < 91){
                s[i] = (char)((int)s[i]+32);
            }
        }
        return s;
    }
};