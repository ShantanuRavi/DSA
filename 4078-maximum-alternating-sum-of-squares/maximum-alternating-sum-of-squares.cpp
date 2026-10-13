class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        for(int i = 0; i < n; i++){
            nums[i] *= nums[i];
        }
        sort(nums.begin(),nums.end(),greater<int>());
        while(i < n/2){
            sum += nums[i] - nums[j];
            i++;
            j--;
        }
        while(j >= n/2){
            sum += nums[j];
            j--;
        }
        return sum;
    }
};