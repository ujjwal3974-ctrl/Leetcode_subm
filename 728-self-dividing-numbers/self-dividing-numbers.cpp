class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>countN;
        for(int i = left; i<=right; i++){

            int countn = 0, countd = 0;
            int temp = i;
            while(temp>0){
                countn++;
                int dig = temp%10;
                if(dig == 0) break;
                if(i%dig == 0){
                    countd++;
                }
                temp/=10;
            }
            if(countn == countd){
                countN.push_back(i);
            }                
        }
        return countN;
    }
};