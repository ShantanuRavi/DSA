class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left = 0;
        int ans = 0;
        int bitCount[32] = {0};

        for (int right = 0; right < nums.size(); right++) {

            // If nums[right] conflicts with the window,
            // remove elements from the left.
            while (true) {
                bool conflict = false;

                for (int bit = 0; bit < 32; bit++) {
                    if ((nums[right] & (1 << bit)) && bitCount[bit] > 0) {
                        conflict = true;
                        break;
                    }
                }

                if (!conflict)
                    break;

                // Remove nums[left]
                for (int bit = 0; bit < 32; bit++) {
                    if (nums[left] & (1 << bit)) {
                        bitCount[bit]--;
                    }
                }

                left++;
            }

            // Add nums[right]
            for (int bit = 0; bit < 32; bit++) {
                if (nums[right] & (1 << bit)) {
                    bitCount[bit]++;
                }
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};