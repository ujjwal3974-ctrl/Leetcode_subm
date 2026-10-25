class Solution {
public:
    bool checkPerfectNumber(int num) {
        int dup = 0;
        for(int i = 1; i < num; i++){
            if(num%i == 0){
                dup += i;
            }
        }
        return dup == num;
        
    }
};