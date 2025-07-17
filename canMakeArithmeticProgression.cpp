#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

class Solution 
{
public:
    bool canMakeArithmeticProgression(std::vector<int>& arr) 
    {
        if (arr.size() < 2) 
        {
            return false;
        }
        std::sort(arr.begin(), arr.end());
        int x = std::abs(arr[0] - arr[1]);
        for (int i = 1; i < arr.size() - 1; ++i)
        {
            if (abs(arr[i] - arr[i + 1]) != x)
            {
                return false;
            }
            x = std::abs(arr[i] - arr[i + 1]);
        }
        return true;
    }
};

int main() 
{
    std::vector<int> arr = {1, 2, 3, 4};
    Solution s;
    std::cout << s.canMakeArithmeticProgression(arr);
    return 0;
}