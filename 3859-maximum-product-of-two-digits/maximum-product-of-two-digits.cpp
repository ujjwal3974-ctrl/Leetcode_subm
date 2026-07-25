class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;

        while(n>0){
            int dig = n%10;
            arr.push_back(dig);
            n/=10;
        }
        int high = INT_MIN, sHigh = INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]>=high){
                sHigh=high;
                high=arr[i];
            }else if(arr[i] > sHigh){
                sHigh = arr[i];
            }          

        }
        return int(high*sHigh);        
    }
};