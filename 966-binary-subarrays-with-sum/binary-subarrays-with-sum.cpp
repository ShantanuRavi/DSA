class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0)
            return 0;
        int low = 0;
        int high = 0;
        int result = 0;
        int sum = 0;
        while (high < nums.size()) {
            sum = sum + nums[high];
            while (sum > goal) {
                sum = sum - nums[low];
                low++;
            }
            result += high - low + 1;
            high++;
        }
        return result;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int a = atMost(nums, goal);
        int b = atMost(nums, goal - 1);
        return a - b;
    }
};