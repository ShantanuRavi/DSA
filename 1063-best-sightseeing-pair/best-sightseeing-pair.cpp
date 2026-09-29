class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int result = 0;
        int prev = values[0];
        for(int i = 1; i < values.size(); i++){
            result = max(result,prev + values[i] - i);
            prev = max(prev,values[i] + i);
        }
        return result;   
    }
};