class Solution {
public:
    bool detectCapitalUse(string word) {
        bool result = false;
        bool firstLetterIsCapital = false;
        bool secondLetterIsCapital = false;
        
        if (word.length() <= 1)
            return true;
            
        if (word[0] >= 'A' && word[0] <= 'Z')
            firstLetterIsCapital = true;
        if (word[1] >= 'A' && word[1] <= 'Z')
            secondLetterIsCapital = true;
        if (!firstLetterIsCapital && secondLetterIsCapital)
            return false;
            
        for (int i = 2; i < word.length(); ++i) {
            if (!firstLetterIsCapital) {
                if (word[i] >= 'A' && word[i] <= 'Z')
                    return false;
            } else {
                if (!secondLetterIsCapital && (word[i] >= 'A' && word[i] <= 'Z'))
                    return false;
                else if (secondLetterIsCapital && (word[i] >= 'a' && word[i] <= 'z'))
                    return false;
            }
        }
        
        return true;
    }
};