#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProductDifference(std::vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        return (nums[nums.size() - 1] * nums[nums.size() - 2]) - (nums[0] * nums[1]);
    }
};
int main() 
{
    std::vector<int> nums = {4, 2, 5, 9, 7, 4, 8};
    Solution s;
    std::cout << s.maxProductDifference(nums);
    return 0;
}