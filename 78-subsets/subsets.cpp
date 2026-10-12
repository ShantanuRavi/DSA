class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, nums, temp, ans);
        return ans;
    }

    void solve(int i, vector<int>& nums, vector<int>& temp,
               vector<vector<int>>& ans) {
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Include the current element
        temp.push_back(nums[i]);
        solve(i + 1, nums, temp, ans);

        // Exclude the current element
        temp.pop_back();
        solve(i + 1, nums, temp, ans);
    }
};
