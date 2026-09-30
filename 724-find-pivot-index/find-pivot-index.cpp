class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        vector<int> prefixSum(n, 0);
        // vector<int> suffixSum(n, 0);
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        }
        // for (int i = n - 2; i >= 0; i--) {
        //     suffixSum[i] = suffixSum[i + 1] + nums[i + 1];
        // }
        // for (int i = 0; i < n; i++) {
        //     if(prefixSum[i] == suffixSum[i]){
        //         return i;
        //     }
        // }
        int s = 0;
        for(int i = n - 1; i >= 0; i--){
            if(prefixSum[i] == s){
                ans = i;
            }
            s = s + nums[i];
        }

        return ans;
    }
};