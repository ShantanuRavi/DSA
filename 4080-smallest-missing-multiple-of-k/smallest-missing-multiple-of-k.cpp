class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> hash(101,0);
        int ans;
        for(int i = 0; i < n; i++){
            hash[nums[i]]++;
        }
        for(int i = k; i <= 100; i = i + k){
            if(hash[i] == 0){
                ans = i;
                break;
            }
            else{
                continue;
            }
        }
       return ans; 
    }
};