#include <iostream>
#include <vector>

class Solution {
public:
    int mySqrt(int x) 
    {
        long long result = 0, temp = 0;
        for (int i = 0; temp < x; ++i)
        {
            result = i;
            temp = i * i;
        }
        if (temp > x)
        {
            return result - 1;
        }
        return result;
    }
};

int main() 
{
    Solution s;
    std::cout << s.mySqrt(2147483647);
    return 0;
}