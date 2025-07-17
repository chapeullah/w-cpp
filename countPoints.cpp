#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution 
{
public:
    int countPoints(std::string rings) 
    {
        int result = 0;
        std::string red, green, blue;
        for (int i = 0; i < rings.size(); i += 2)
        {
            switch (rings[i])
            {
                case 'R':
                {
                    red = red + rings[i + 1];
                    break;
                }
                case 'G':
                {
                    green = green + rings[i + 1];
                    break;
                }
                case 'B':
                {
                    blue = blue + rings[i + 1];
                    break;
                }
            }
        }
        for (int i = 0; i <= 9; ++i)
        {
            char ch = i + '0';
            if (std::find(red.begin(), red.end(), ch) != red.end() &&
                std::find(green.begin(), green.end(), ch) != green.end() &&
                std::find(blue.begin(), blue.end(), ch) != blue.end())
            {
                ++result;
            }
        }
        return result;
    }
};

int main() 
{
    Solution s;
    std::cout << s.countPoints("B0R0G0R9R0B0G0");
    return 0;
}