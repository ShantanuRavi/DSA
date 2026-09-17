class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestMaxTilNow = nums[0];
        int bestMinTilNow = nums[0];
        int result = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int freshStart = nums[i];
            int currPro1 = bestMaxTilNow * nums[i];
            int currPro2 = bestMinTilNow * nums[i];
            bestMaxTilNow = max(freshStart,max(currPro1,currPro2));
            bestMinTilNow = min(freshStart,min(currPro1,currPro2));
            result = max(result,max(bestMaxTilNow,bestMinTilNow));
        }
        return result;    
    }
};