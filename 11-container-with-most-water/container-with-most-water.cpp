class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size() - 1;
        int result = 0;
        while (low < high) {
            int h = min(height[low], height[high]);
            int area = h * (high - low);
            result = max(result, area);
            if (height[low] < height[high]) {
                low++;
            } else {
                high--;
            }
        }
        return result;
    }
};