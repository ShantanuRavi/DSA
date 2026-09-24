class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int result = -1;
        for(int i = 0; i < nums.size();i++){
            int n = nums[i];
            int sum = 0;
            while(n!=0){
                int rem = n % 10;
                sum = sum + rem;
                n = n/10;
            }
            if(sum == i){
                result = i;
                break;
            }
        }
        return result;   
    }
};