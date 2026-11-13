class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> v;
        // int start = 0;
        // for (int i = 0; i <= s.size(); i++) {
        //     if (i == s.size() || s[i] == ' ') {
        //         v.push_back(s.substr(start, i - start));
        //         start = i + 1;
        //     }
        // }
        string word;
        stringstream ss(s);
        while (ss >> word) {
            v.push_back(word);
        }
        return v[v.size() - 1].length();
    }
};