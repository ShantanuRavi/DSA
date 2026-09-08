class Solution {
public:
    int countCommas(int n) {
        int ans;
        if(n < 1000){
            ans = 0;
        }
        // else if(n >= 1000 && n <= 9999){
        //     ans = n - 1000 + 1;
        // }
        else if(n >= 1000 && n <= 99999){
            ans = n - 1000 + 1;
        }
        return ans;   
    }
};