class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        if (k <= 0) {
            return 0;
        }
        map<int, int> mpp;
        int low = 0;
        int high = 0;
        int count = 0;
        while (high < nums.size()) {
            mpp[nums[high]]++;
            while (mpp.size() > k) {
                mpp[nums[low]]--;
                if (mpp[nums[low]] == 0) {
                    mpp.erase(nums[low]);
                }
                low++;
            }
            count += high - low + 1;
            high++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int a = atMost(nums,k);
        int b = atMost(nums,k - 1);
        return a - b;
    }
};