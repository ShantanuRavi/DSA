class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>> mpp;
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]].push_back(i);
        }
        for(auto x: mpp){
            if(x.second.size() == 3){
                if(x.second[1] - x.second[0] == x.second[2] - x.second[1]){
                    result++;
                }
            }   
        }
        return result;    
    }
};