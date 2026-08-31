class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int leftMax = 0;
        int rightMax = 0;
        int low = 0;
        int high = height.size() - 1;
        while(low < high){ 
            if(height[low] < height[high]){
                leftMax = max(leftMax, height[low]);
                water += (leftMax - height[low])*1;
                low++;
            }
            else{
                rightMax = max(rightMax,height[high]);
                water += (rightMax - height[high])*1;
                high--;
            }
        }
        return water;  
    }
};