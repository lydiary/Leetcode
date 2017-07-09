// 思路： 每个人至少会分得一般的糖果，如果糖果的数量比每个人分得的糖果数量还多，
// 肯定最多能分到一般数量的糖果种类，如果少于一半的话，让sister每种糖果都分得一份。

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        map<int, int> candyTypes;
        
        for (const auto& item : candies)
            ++candyTypes[item];
        
        if (candyTypes.size() <= candies.size() / 2)
            return candyTypes.size();
        return candies.size() / 2;
    }
};
