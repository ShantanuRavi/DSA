class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            if (mp[nums[i]] != 0) {
                int previousIndex = mp[nums[i]] - 1;

                if (i - previousIndex <= k) {
                    return true;
                }
            }

            mp[nums[i]] = i + 1;
        }

        return false;
    }
};