class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int, vector<int>> mpp;
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]].push_back(i);
        }
        for (auto x : mpp) {
            if (x.second.size() >= 3) {
                int gap = x.second[1] - x.second[0];
                bool valid = true;
                for (int i = 1; i < x.second.size() - 1; i++) {
                    if (x.second[i + 1] - x.second[i] != gap) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    result++;
                }
            }
        }
        return result;
    }
};