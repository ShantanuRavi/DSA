class Solution {
public:
    int atMost(vector<int>& nums, int k){
        if(k < 0)
            return 0;
        int low = 0;
        int high = 0;
        int count = 0;
        int result = 0;
        while (high < nums.size()) {
            if (nums[high] % 2 == 1) {
                count++;
            }
            while (count > k) {
                if (nums[low] % 2 == 1) {
                    count--;
                }
                low++;
            }
            result = result + high - low + 1;
            high++;
        }
        return result;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
       int a = atMost(nums,k);
       int b = atMost(nums,k - 1);
       return a - b;
    }
};