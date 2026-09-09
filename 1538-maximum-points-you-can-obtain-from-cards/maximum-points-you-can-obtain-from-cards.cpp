class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int low = 0;
        int high = cardPoints.size() - 1;
        int sum = 0;
        int result;
        for(int i = 0 ; i < k; i++){
            sum += cardPoints[i];
        }
        result = sum;
        int j = cardPoints.size() - 1;
        for(int i = k - 1; i >= 0; i--){
            sum = sum - cardPoints[i];
            sum = sum + cardPoints[j];
            j--;
            result = max(sum,result);
        }
        return result;    
    }
};