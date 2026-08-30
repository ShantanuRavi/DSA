class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int moves = 2;
        int sourceSum = source[0] + source[1];
        int targetSum = target[0] + target[1];
        if (sourceSum % 2 != targetSum % 2) {
            moves = -1;
        } else {
            if (abs(source[0] - target[0]) == abs(source[1] - target[1])) {
                moves = 1;
            }
        }
        return moves;
    }
};