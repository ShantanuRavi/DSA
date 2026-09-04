class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     unordered_map<int,int> mpp;
    //     vector<int> ans;
    //     for(int i = 0; i < nums.size(); i++){
    //         int diff = target - nums[i];
    //         auto it = mpp.find(diff);
    //         if(it != mpp.end() && it->second != i){
    //             ans.push_back(i);
    //             ans.push_back(it->second);
    //             break;
    //         }
    //         mpp[nums[i]] = i;
    //     }
    //     return ans;

    // }

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr(n); 

        for (int i = 0; i < n; i++) {
            arr[i] = {nums[i], i};
        }

        sort(arr.begin(), arr.end()); // sort by value

        int left = 0, right = n - 1;
        while (left < right) {
            int sum = arr[left].first + arr[right].first;
            if (sum == target) {
                return {arr[left].second,
                        arr[right].second}; // original indices
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {}; 
    }
};