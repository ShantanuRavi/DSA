class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> y(100,0);
        for (int i = 0; i < 100; i++) {
            int year = 1950 + i;
            int count = 0;
            for (int j = 0; j < logs.size(); j++) {
                if (year >= logs[j][0] && year < logs[j][1]) {
                    count++;
                }
            }
            y[i] = count;
        }
        int maxPpl = *max_element(y.begin(),y.end());
        int result = 0;
        for(int i = 0; i < 100; i++){
            if(y[i] == maxPpl){
                result = i;
                break;
            }
        }
        return result + 1950;
    }
};