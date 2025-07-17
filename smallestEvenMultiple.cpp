#include <iostream>
#include <vector>
#include <string>

class Solution 
{
public:
    int smallestEvenMultiple(int n) 
    {
        if (n % 2 == 0)
        {
            return n;
        }
        return n * 2;
    }
};

int main() 
{
    Solution s;
    return 0;
}