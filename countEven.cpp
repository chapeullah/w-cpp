#include <iostream>
#include <cmath>
#include <string>

class Solution 
{
public:
    int countEven(int num) 
    {
        int result = 0, it = 0;
        for (int i = 1; i <= num; ++i)
        {
            int sum = 0, temp = i;
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum % 2 == 0)
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
    std::cout << s.countEven(4);
    return 0;
}