#include <iostream>
#include <vector>

class Solution 
{
public:
    std::vector<int> findIntersectionValues(std::vector<int>& nums1, std::vector<int>& nums2) 
    {
        int x = 0, y = 0, index = 0;
        int nums1size = nums1.size(), nums2size = nums2.size();

        while (index < nums1size || index < nums2size)
        {
            if (index < nums1size && 
                std::find(nums2.begin(), nums2.end(), nums1[index]) != nums2.end())
            {
                ++x;
            }
            if (index < nums2size &&
                std::find(nums1.begin(), nums1.end(), nums2[index]) != nums1.end())
            {
                ++y;
            }
            ++index;
        }
        return {x, y};
    }
};

int main() 
{
    
    return 0;
}
