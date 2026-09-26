class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSumTilNow = nums[0];
        int minSumTilNow = nums[0];
        int sum = nums[0];
        int currMaxSum = nums[0];
        int currMinSum = nums[0];
        int result = nums[0];
        for(int i = 1; i < nums.size(); i++){
            currMaxSum = max(currMaxSum + nums[i],nums[i]);
            currMinSum = min(currMinSum + nums[i],nums[i]);
            maxSumTilNow = max(maxSumTilNow,currMaxSum);
            minSumTilNow = min(minSumTilNow,currMinSum);
            sum = sum + nums[i];
        }
        if(maxSumTilNow > 0){
            result = max(maxSumTilNow,sum - minSumTilNow);
        }
        else{
            result = maxSumTilNow;   
        }

        return result;
    }
};