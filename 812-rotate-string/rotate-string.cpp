class Solution {
public:
    bool rotateString(string s, string goal) {
        bool result = false;
        int n = s.size();
        for(int i = 0; i < n; i++){
            int temp = s[0];
            for(int j  = 0; j < s.size() - 1; j++){
                s[j] = s[j + 1];
            }
            s[n - 1] = temp;
            if(s == goal){
                result = true;
                break;
            }
        }
        return result;
        
    }
};