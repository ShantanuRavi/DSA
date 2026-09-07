class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int low = 0;
        int high = 0;
        long long sum = 0;
        long long result = 0;
        while(high < nums.size()){
            sum = sum + nums[high];
            int len = high - low + 1;
            long long score = sum * len;
            while(score >= k){
                sum = sum - nums[low];
                len--;
                score = sum * len;
                low++;
            }
            result += high - low + 1;
            high++;
        }
        return result;   
    }
};