#include <iostream>
#include <vector>
#include <string>

class Solution 
{
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) 
    {
        int biggest = 0;
        std::vector<bool> result;
        for (int i : candies)
        {
            biggest = std::max(biggest, i);
        }
        for (int i : candies)
        {
            (i + extraCandies >= biggest) ? result.push_back(true) : result.push_back(false);
        }
        return result;
    }
};

int main() 
{
    Solution s;
    return 0;
}