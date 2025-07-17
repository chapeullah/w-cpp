#include <iostream>
#include <vector>
#include <cmath>

class Solution 
{
public:
    std::vector<std::vector<int>> generate(int numRows) 
    {
        std::vector<std::vector<int>> result;
        for (int i = 0; i < numRows; ++i)
        {
            std::vector<int> temp(i + 1, 1);
            for (int j = 1; j < i; ++j)
            {
                temp[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(temp);
        }
        return result;
    }
};

int main() 
{
    Solution s;
    s.generate(10);
    return 0;
}