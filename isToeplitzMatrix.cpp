#include <iostream>
#include <vector>

class Solution 
{
public:
    bool isToeplitzMatrix(std::vector<std::vector<int>>& matrix) 
    {
        for (int i = 0; i < matrix.size() - 1; ++i)
        {
            for (int j = 0; j < matrix[i].size() - 1; ++j)
            {
                if (matrix[i][j] != matrix[i + 1][j + 1])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() 
{
    Solution s;
    return 0;
}