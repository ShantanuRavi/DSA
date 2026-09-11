// class Solution {
// public:
//     int sumDecoded(vector<long long>& nums) {
//         const long long MOD = 1000000007;
//         long long ans = 0;
//         for(int i = 0; i < nums.size(); i++){
//             int width =  nums[i]%10;
//             long long d = nums[i]/10;
//             string str = to_string(d);
//             long long x = 0, y = 0;
//             for(int i = 0; i < width; i++){
//                 x = x*10 + (str[i] - '0');
//             }
//             for(int i = width; i < str.length(); i++){
//                 y = y*10 + (str[i] - '0');
//             }
//             long long result = pow(x,y);
//             ans = (ans + result % MOD) % MOD;
//         }
//         return ans;

//     }
// };

class Solution {
public:
    const long long MOD = 1000000007;

    long long power(long long x, long long y) {
        long long result = 1;

        x %= MOD;

        while (y > 0) {
            if (y % 2 == 1) {
                result = (result * x) % MOD;
            }

            x = (x * x) % MOD;
            y /= 2;
        }

        return result;
    }

    int sumDecoded(vector<long long>& nums) {
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int width = nums[i] % 10;
            long long d = nums[i] / 10;

            string str = to_string(d);

            long long x = 0, y = 0;

            for (int j = 0; j < width; j++) {
                x = x * 10 + (str[j] - '0');
            }

            for (int j = width; j < str.length(); j++) {
                y = y * 10 + (str[j] - '0');
            }

            long long result = power(x, y);

            ans = (ans + result) % MOD;
        }

        return ans;
    }
};