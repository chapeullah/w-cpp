#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<int> arrayRankTransform(std::vector<int>& arr) 
    {
        std::vector<int> copy = arr;
        int temp = 1;
        std::sort(copy.begin(), copy.end());
        copy.erase(std::unique(copy.begin(), copy.end()), copy.end());
        std::unordered_map<int, int> ranks;
        for (int i = 0; i < copy.size(); ++i)
        {
            ranks[copy[i]] = i + 1;
        }
        for (int i = 0; i < arr.size(); ++i)
        {
            arr[i] = ranks[arr[i]];
        }
        return arr;
    }
};

int main() 
{
    Solution s;
    std::vector<int> array = {1, 2, 5, 2, 1};
    s.arrayRankTransform(array);
    return 0;
}