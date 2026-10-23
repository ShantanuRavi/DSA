// class Solution {
// public:
//     string shift(string s, int j, int val){
//         for(int i = 0; i <= j; i ++){
//             s[i] = 'a' + (s[i] - 'a' + val % 26) % 26;
//         }
//         return s;
//     }
//     string shiftingLetters(string s, vector<int>& shifts) {
//         int n = shifts.size();
//         for(int i = 0; i < n; i++){
//             s = shift(s,i,shifts[i]);
//         }
//         return s;   
//     }
// };

// class Solution {
// public:
//     void shift(string &s, int j, int val) {
//         for (int i = 0; i <= j; i++) {
//             s[i] = 'a' + (s[i] - 'a' + val % 26) % 26;
//         }
//     }

//     string shiftingLetters(string s, vector<int>& shifts) {
//         int n = shifts.size();

//         for (int i = 0; i < n; i++) {
//             shift(s, i, shifts[i]);
//         }

//         return s;
//     }
// };

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        long long shift = 0;

        for (int i = n - 1; i >= 0; i--) {
            shift = (shift + shifts[i]) % 26;
            s[i] = (s[i] - 'a' + shift) % 26 + 'a';
        }

        return s;
    }
};