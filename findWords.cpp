#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution 
{
public:
    std::vector<std::string> findWords(std::vector<std::string>& words) 
    {
        
        std::vector<std::string> result;
        std::string 
            firstRow = "qwertyuiop", 
            secondRow = "asdfghjkl",
            thirdRow = "zxcvbnm";
        int first, second, third;
        for (std::string word : words)
        {
            std::string temp = word;
            std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            first = 0, second = 0, third = 0;
            for (char ch : temp)
            {
                if (std::find(firstRow.begin(), firstRow.end(), ch) != firstRow.end())
                {
                    ++first;
                }
                else if (std::find(secondRow.begin(), secondRow.end(), ch) != secondRow.end())
                {
                    ++second;
                }
                else 
                {
                    ++third;
                }
            }
            if (first && !second && !third)
            {
                result.push_back(word);
            }
            else if (!first && second && !third)
            {
                result.push_back(word);
            }
            else if (!first && !second && third)
            {
                result.push_back(word);
            }
        }
        return result;
    }
};

int main() 
{
    Solution s;
    return 0;
}