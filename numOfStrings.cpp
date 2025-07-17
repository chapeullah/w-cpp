#include <iostream>
#include <vector>
#include <string>

class Solution 
{
public:
    int numOfStrings(std::vector<std::string> &arr, std::string word) 
    {
        int count = 0;
        for (std::string sub : arr)
        {
            if (word.find(sub) != std::string::npos)
            {
                ++count;
            }
        }
        return count;
    }
};

int main() 
{
    std::vector<std::string> arr = {"a", "abc", "bc", "d"};
    Solution s;
    std::cout << s.numOfStrings(arr, "abc");
    return 0;
}