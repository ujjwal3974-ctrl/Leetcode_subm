class Solution {
public:
    bool isPalindrome(string s) {
        string b;
        for(int i = 0; i<s.length(); i++){
            if(isalnum(s[i])){
                b.push_back(tolower(s[i]));
            }
        }
        int st = 0, end = b.length()-1, count = 0, n=b.length();
        while(st<end){
            if(b[st] == b[end]){
                count++;
            }
            st++;
            end--;
        }
        if(count==(n/2)) return true;
        return false;
    }
};