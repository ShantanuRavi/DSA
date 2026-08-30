class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxEle = INT_MIN;
        int maxInd = -1;
        int minEle = INT_MAX;
        int minInd = -1;
        int mid = (nums.size()/2);
        int result = INT_MAX;
        if(mid == 0){
            return 1;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxEle) {
                maxEle = nums[i];
                maxInd = i;
            }
            if (nums[i] < minEle) {
                minEle = nums[i];
                minInd = i;
            }
        }
        if(minInd <= mid && maxInd <= mid){
            if(minInd > maxInd){
                result = min(result,minInd + 1);
            }
            else{
                result = min(result,maxInd + 1);
            }
        }
        if(minInd >= mid && maxInd >= mid){
            if(minInd < maxInd){
                int ans = nums.size() - minInd;
                result = min(result,ans);
            }
            else{
                int ans = nums.size() - maxInd;
                result = min(result,ans);
            }
        }
        if((minInd < mid && maxInd > mid) || (minInd > mid && maxInd < mid)){
            if(minInd > maxInd){
                int back = nums.size() - minInd;
                int front = maxInd + 1;
                int again = nums.size() - maxInd;
                result = min(result,again);
                result = min(result,minInd + 1);
                result = min(result, back + front);
            }
            else{
                int back = nums.size() - maxInd;
                int front = minInd + 1;
                int again = nums.size() - minInd;
                result = min(result,again);
                result = min(result,maxInd + 1);
                result = min(result, back + front);
            }
        }
        cout<<"mid = "<<mid<<endl;
        cout<<minInd<<endl;
        cout<<maxInd<<endl;
        // cout<<result;
        // // return 0;

    return result;
        
    }
};