#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool isMonotonic(std::vector<int>& nums) 
    {
        bool increasing = false, decreasing = false;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            std::cout << "int i = " << i << "\n";
            if (nums[i] > nums[i + 1])
            {
                decreasing = true;
            }
            else if (nums[i] < nums[i + 1])
            {
                increasing = true;
            }
        }
        if (increasing && decreasing)
        {
            return false;
        }
        return true;
    }
};

int main() 
{
    std::vector<int> nums = {1, 3, 2};
    Solution s;
    std::cout << ((s.isMonotonic(nums)) ? "true" : "false");
    return 0;
}