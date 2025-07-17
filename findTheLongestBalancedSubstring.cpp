#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class Solution 
{
public:
    int findTheLongestBalancedSubstring(std::string s) 
    {
        std::unordered_map<int, int> map;
        int right, result = 0;
        std::string temp;
        for (int i = 0; i < s.size(); ++i)
        {
            right = s.size();
            while (right > i)
            {
                temp = s.substr(i, right - i);
                if (isSubstrBalanced(temp))
                {
                    result = std::max(result, right - i);
                }
                --right;
            }
        }
    }

    bool isSubstrBalanced(std::string &str)
    {
        int one = 0, zero = 0;
        char check = str[0];
        for (char ch : str)
        {
            if (check == '1' && ch == '0') return false;
            check = ch;
            ch == '1' ? ++one : ++zero;
        }
        if (one != zero) return false;
        return true;
    }
};

int main() 
{
    Solution s;
    return 0;
}