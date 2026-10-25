class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        int count = 1;
        int result = 1;

        for (auto it = mpp.begin(); it != mpp.end(); it++) {

            auto nextIt = next(it);

            if (nextIt != mpp.end() && nextIt->first == it->first + 1) {

                count++;
            } else {
                count = 1;
            }

            result = max(count, result);
        }

        return result;
    }
};