#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class Solution 
{
public:
    int longestPalindrome(std::string s) 
    {
        bool flag = false;
        int result = 0, max;
        std::unordered_map<char, int> map;
        for (char ch : s)
        {
            ++map[ch];
        }
        for (const auto &pair : map)
        {
            if (pair.second % 2 == 0)
            {
                result = result + pair.second;
            }
            else 
            {
                max = max + pair.second - 1;
                flag = true;
            }
        }
        if (flag) 
        {
            max += 1;
        }
        result = result + max;
        return result;
    }
};

int main() 
{
    Solution s;
    return 0;
}