#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution 
{
public:
    int finalValueAfterOperations(std::vector<std::string>& operations) 
    {
        int result = 0;
        for (std::string str : operations)
        {
            if (str == "++X" || str == "X++")
            {
                ++result;
            }
            else
            {
                --result;
            }
        }
        return result;
    }
};

int main() 
{
    Solution s;
    return 0;
}