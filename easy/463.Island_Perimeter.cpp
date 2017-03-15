/**
 * 思路： 因为每个正方形的周长是4，有多少个1就有多少个正方形，用nbrOfOne记录，所以周长为4*nbrOfOne，
 * 对每一个元素检查左边和上边的数据是否为1，如果有将变量nbrOfNeighbor加1，表示有重边，每一条重边的周
 * 长为2，因为两个正方形重叠了，重叠部分总的周长为nbrOfNeighbor*2，故总周长为4*nbrOfOne-nbrOfNeighbor*2
 */

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int nbrOfOne = 0;
        int nbrOfNeighbor = 0;
        
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] == 1) {
                    ++nbrOfOne;
                    if (j-1 >= 0 && grid[i][j-1] == 1) {
                        ++nbrOfNeighbor;
                    }
                    if (i-1 >= 0 && grid[i-1][j] == 1) {
                        ++nbrOfNeighbor;
                    }
                }
            }
        }
        
        return nbrOfOne * 4 - nbrOfNeighbor * 2;
    }
};