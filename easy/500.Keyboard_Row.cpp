class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        
        const string kStr1 = "qwertyuiop";
        const string kStr2 = "asdfghjkl";
        const string kStr3 = "zxcvbnm";
        
        map<char, int> index;
        for (int i = 0; i < kStr1.length(); ++i)
            index[kStr1[i]] = 1;
        for (int i = 0; i < kStr2.length(); ++i)
            index[kStr2[i]] = 2;
        for (int i = 0; i < kStr3.length(); ++i)
            index[kStr3[i]] = 3;
        
        for (const auto& item : words) {
            int tmp = -1, i = 0;
            for (; i < item.length(); ++i) {
                if (tmp == -1) tmp = index[lowercase(item[i])];
                else if (tmp != index[lowercase(item[i])])
                    break;
            }
            if (i == item.length())
                result.push_back(item);
        }
        return result;
    }
    
private:
    inline char lowercase(char ch) {
        if (ch >= 'A' && ch <= 'Z')
            return ch - ('A' - 'a');
        return ch;
    }
};
