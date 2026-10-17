class Solution {
public:
    int digitSum(int a) {
        int sum = 0;

        while (a != 0) {
            sum += a % 10;
            a /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> v(n, vector<int>(3));

        for (int i = 0; i < n; i++) {
            v[i][0] = digitSum(nums[i]);
            v[i][1] = nums[i];
            v[i][2] = i;  // Original index
        }

        // Sort by digit sum, then by number
        sort(v.begin(), v.end(), [](const vector<int>& a,
                                    const vector<int>& b) {
            if (a[0] != b[0])
                return a[0] < b[0];

            return a[1] < b[1];
        });

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || v[i][2] == i)
                continue;

            int cycleSize = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = v[j][2];
                cycleSize++;
            }

            if (cycleSize > 1)
                swaps += cycleSize - 1;
        }

        return swaps;
    }
};