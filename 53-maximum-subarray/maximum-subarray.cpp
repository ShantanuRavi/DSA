class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestEnding = nums[0];
        int result = nums[0];
        for(int i = 1;i < nums.size();i++){
            int prevSum = bestEnding + nums[i];
            int startNew = nums[i];
            bestEnding = max(prevSum,startNew);
            result = max(result,bestEnding);    
        }
        return result;    
    }
};