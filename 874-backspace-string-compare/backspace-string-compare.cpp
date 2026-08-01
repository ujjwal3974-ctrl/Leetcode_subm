class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string empS = "", empT = "";
        for(int i = 0; i <s.length(); i++){
            if(s[i]!='#'){
                empS.push_back(s[i]);
            }else{
                if(empS != ""){
                    empS.pop_back();
                }
            }
        }
        for(int j = 0; j<t.length(); j++){
            if(t[j]!='#'){
                empT.push_back(t[j]);
            }else{
                if(empT != ""){
                    empT.pop_back();
                }
            }
        }
        if(empS==empT){
            return true;
        }
        return false;
    }
};