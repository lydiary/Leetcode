class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        
        for (string word : words) {
            int firstCharRow = searchRow(word[0]);
            bool oneLine = true;
            
            for (int i = 1; i < word.length(); ++i) {
                if (firstCharRow != searchRow(word[i])) {
                    oneLine = false;
                    break;
                }
            }
            if (oneLine)
                result.push_back(word);
        }
        
        return result;
    }
    
private:
    const string rows[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
    
    char lowerCase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            ch += 'a' - 'A';
        }
        return ch;
    }
    
    int searchRow(char ch) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < rows[i].length(); ++j) {
                if (lowerCase(ch) == rows[i][j])
                    return i;
            }
        }
        
        return -1;
    }
};