class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,j = 0;
        int count = 0;
        while(i < nums.size()){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
                count++;
            }
            i++;
        }
        return count;
        
    }
};