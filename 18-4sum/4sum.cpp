class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int low = j + 1;
                int high = n - 1;
                long long t = (long long)target - (nums[i] + nums[j]);
                while (low < high) {
                    int sum = nums[low] + nums[high];
                    if (sum == t) {
                        result.push_back(
                            {nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                        while (low < high && nums[low] == nums[low - 1]) {
                            low++;
                        }
                        while (low < high && nums[high] == nums[high + 1]) {
                            high--;
                        }
                    } else if (sum > t) {
                        high--;
                    } else {
                        low++;
                    }
                }
            }
        }
        return result;
    }
};