#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int maximumValue(std::vector<std::string>& strs) 
    {
        int result = 0, temp;
        for (std::string str : strs)
        {
            temp = 0;
            for (char ch : str)
            {
                if (!isAlpha(str))
                {
                    temp = temp * 10 + (ch - '0');
                    if (result < temp)
                    {
                        result = temp;
                    }
                }
                else
                {
                    if (result < str.size())
                    {
                        result = str.size();
                    }
                }
            }
        }
        return result;    
    }

    bool isAlpha(const std::string &str)
    {
        for (char ch : str)
        {
            if (std::isalpha(ch))
            {
                return true;
            }
        }
        return false;
    }
};

int main() 
{
    Solution s;
    return 0;
}