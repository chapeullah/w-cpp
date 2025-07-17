#include <iostream>
#include <vector>
#include <algorithm>

class Solution 
{
public:
    int countKConstraintSubstrings(std::string s, int k) 
    {
        int zero, one, j, result = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            zero = 0, one = 0, j = i;
            while ((zero <= k || one <= k) && j < s.size())
            {
                if (zero <= k || one <= k) ++result;
                for (int e = i; e < j; ++e)
                {
                    (s[e] == '0') ? ++zero : ++one;
                }
                ++j;
            }
        }
        return result;
    }
};

int main() 
{
    Solution s;
    std::cout << s.countKConstraintSubstrings("10101", 1);
    return 0;
}