class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDelete = arr[0];
        int oneDelete = INT_MIN;
        int result = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            int freshStart = arr[i];
            int prevNoDelete = noDelete;
            int prevOneDelete = oneDelete;

            noDelete = max(prevNoDelete + arr[i], freshStart);

            int newOneDelete;

            if (oneDelete == INT_MIN) {
                newOneDelete = arr[i];
            } else {
                newOneDelete = prevOneDelete + arr[i];
            }

            oneDelete = max(newOneDelete, prevNoDelete);

            result = max(result,max(noDelete,oneDelete));
        }
        return result;
    }
};