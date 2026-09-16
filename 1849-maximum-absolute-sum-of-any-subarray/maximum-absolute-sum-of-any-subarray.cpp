class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currMaxSum = nums[0];
        int currMinSum = nums[0];
        int result = abs(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            int freshStart = nums[i];
            currMaxSum = currMaxSum + nums[i];
            currMinSum = currMinSum + nums[i];
            currMaxSum = max(currMaxSum,freshStart);
            currMinSum = min(currMinSum,freshStart);
            result = max(result,max(abs(currMaxSum),abs(currMinSum)));
        }
        return result;    
    }
};