#include <iostream>
#include <vector>
#include <algorithm>

class Solution 
{
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) 
    {
        std::vector<int> result;
        for (int i = 0; i < words.size(); ++i)
        {
            if (std::find(words[i].begin(), words[i].end(), x) != words[i].end())
            {
                result.push_back(i);
            }
        }
    }
};

int main() 
{
    Solution s;
    return 0;
}