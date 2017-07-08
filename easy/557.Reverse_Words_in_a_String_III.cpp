class Solution {
public:
    string reverseWords(string s) {
        string result(s);
        int pos = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ' ') {
                for (int j = i - 1; j >= 0 && s[j] != ' '; --j) {
                    result[pos++] = s[j];
                }
                ++pos;
            }
            
            if (i == s.length() - 1) {
                for (int j = i; j >= 0 && s[j] != ' '; --j) {
                    result[pos++] = s[j];
                }
            }
        }
        return result;
    }
};
