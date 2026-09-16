class Solution {
public:
    // int maxSubArray(vector<int>& nums) {
    //     int currMaxSum = nums[0];
    //     int result = nums[0];
    //     for(int i = 1; i < nums.size(); i++){
    //         int freshStart = nums[i];
    //         currMaxSum = currMaxSum + nums[i];
    //         currMaxSum = max(currMaxSum,freshStart);
    //         result = max(result,currMaxSum);
    //     }
    //     return result;    
    // }

    int maxSubArray(vector<int>& nums){
        int sum = 0;
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            sum =  sum + nums[i];
            if(sum > ans){
                ans = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return ans;
    }
};