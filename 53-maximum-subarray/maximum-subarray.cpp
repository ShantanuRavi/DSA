class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMaxSum = nums[0];
        int result = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int freshStart = nums[i];
            currMaxSum = currMaxSum + nums[i];
            currMaxSum = max(currMaxSum,freshStart);
            result = max(result,currMaxSum);
        }
        return result;
        
    }
};