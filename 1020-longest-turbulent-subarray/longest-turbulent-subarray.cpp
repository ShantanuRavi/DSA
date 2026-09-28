class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int low = 0;
        int high = 1;
        int result = 1;
        char prev = ' ';
        while (high < arr.size()) {
            if (arr[high - 1] > arr[high] && prev != '>') {
                result = max(result, high - low + 1);
                prev = '>';
                high++;
            } else if (arr[high - 1] < arr[high] && prev != '<') {
                result = max(result, high - low + 1);
                prev = '<';
                high++;
            } else {
                if (arr[high - 1] == arr[high]) {
                    high++;
                }
                low = high - 1;
                prev = ' ';
            }
        }
        return result;
    }
};