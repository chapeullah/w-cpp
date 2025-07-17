#include <iostream>
#include <vector>
#include <cmath>

class Solution 
{
public:
    int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points) 
    {
        int result = 0, x, y;
        for (int i = 0; i < points.size() - 1; ++i)
        {
            x = std::abs(points[i][0] - points[i + 1][0]);
            y = std::abs(points[i][1] - points[i + 1][1]);
            (x > y) ? result += x : result += y;
        }
        return result;
    }
};

int main() 
{
    Solution s;
    std::vector<std::vector<int>> points = {{1, 1}, {3, 4}, {-1, 0}};
    std::cout << s.minTimeToVisitAllPoints(points);
    return 0;
}