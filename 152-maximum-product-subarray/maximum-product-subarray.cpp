class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestEnding1 = nums[0];
        int result1 = nums[0];
        int bestEnding2 = nums[0];
        int result2 = nums[0];
        int result = nums[0];
        for(int i = 1;i < nums.size();i++){
            int prevPro1 = bestEnding1 * nums[i];
            int startNew1 = nums[i];
            int prevPro2 = bestEnding2 * nums[i];
            int startNew2 = nums[i];
            bestEnding1 = max({prevPro1, prevPro2, startNew1});
            result1 = max(result1,bestEnding1);
            bestEnding2 = min({prevPro1, prevPro2, startNew1});
            result2 = min(result2,bestEnding2);
            result = max(result1,result2);
        }
        return result;    
    }
};