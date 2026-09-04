class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int result = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int maxi = *max_element(nums.begin(),nums.begin() + i + 1);
            int mini = *min_element(nums.begin() + i, nums.end());
            int value = maxi - mini;
            if(value <= k){
                result = min(result,i);
            }
        }
        if(result == INT_MAX){
            result = -1;
        } 
        return result; 
    }
};