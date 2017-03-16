class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> t_map;
        map<char, int> s_map;
        
        for (int i = 0; i < t.length(); ++i)
            ++t_map[t[i]];
        for (int i = 0; i < s.length(); ++i)
            ++s_map[s[i]];
        for (int i = 0; i < t.length(); ++i) {
            if (t_map[t[i]] != s_map[t[i]])
                return t[i];
        }
    }
};