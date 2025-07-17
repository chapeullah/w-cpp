#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <unordered_map>

class Solution 
{
public:
    std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) 
    {
        std::string str = s1 + " " + s2;
        std::vector<std::string> result;
        std::unordered_map<std::string, int> uMap;
        std::string word;
        std::istringstream stream(str);
        while (stream >> word)
        {
            uMap[word] += 1;
        }
        for (std::pair<std::string, int> i : uMap)
        {
            if (i.second == 1)
            {
                result.push_back(i.first);
            }
        }
        return result;
    }
};

int main() 
{
    Solution s;
    std::vector<std::string> arr = s.uncommonFromSentences("this apple is sweet", "this apple is sour");
    for (std::string i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}