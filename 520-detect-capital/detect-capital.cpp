class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0, capital0 = 0;
        for(int i = 0; i<word.length(); i++){
            if(word[i]>= 65 && word[i]<91){
                capital++;
            }
        }
        if((word[0] >=65 && word[0]<91) && capital == 1){
            return true;
        }
        if(capital == word.length() || 
            capital == 0) return true;
        return false;
    }
};