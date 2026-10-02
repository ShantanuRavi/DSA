class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int low = 0;
        int high = 0;
        int result = 0;

        while (high < nums.size()) {
            mpp[nums[high]]++;
            while (mpp[nums[high]] > k) {
                mpp[nums[low]]--;
                low++;
            }
            int len = high - low + 1;
            result = max(len, result);
            high++;
        }
        return result;
    }
};