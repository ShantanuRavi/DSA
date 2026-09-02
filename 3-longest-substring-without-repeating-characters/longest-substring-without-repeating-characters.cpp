class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int low = 0, high = 0;
        int result = 0;
        while(high < s.length()){
            mpp[s[high]]++;
            int currWindow = high - low + 1;
            while(mpp.size() < currWindow){
                mpp[s[low]]--;
                if(mpp[s[low]] == 0){
                    mpp.erase(s[low]);
                }
                low++;
                currWindow = high - low + 1;
            }
            int len = high - low + 1;
            result = max(len,result);
            high++;
        }
        return result;
    }
};