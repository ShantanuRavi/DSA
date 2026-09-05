class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int result = INT_MAX;
        int maxi = nums[0];
        vector<int>mini(n,0);
        mini[n - 1] = nums[n- 1];
        for(int i = n - 2; i >= 0; i--){
            mini[i] = min(mini[i + 1],nums[i]);
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            int value = maxi - mini[i];
            if(value <= k){
                result = min(result,i);
                break;
            }
        }
        if(result == INT_MAX){
            result = -1;
        } 
        return result; 
    }
};