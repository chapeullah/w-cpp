#include <iostream>
#include <vector>
#include <string>

class Solution 
{
public:
    std::string makeSmallestPalindrome(std::string s) 
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                s[left] = s[right] = std::min(s[left], s[right]);
            }
            ++left, --right;
        }
        return s;
    }
};

int main() 
{
    Solution s;
    return 0;
}