#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class Solution 
{
public:
    std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) 
    {
        std::string str = s1 + " " + s2;
        std::vector<std::string> sum, result;
        std::string word;
        std::istringstream stream(str);
        while (stream >> word)
        {
            sum.push_back(word);
        }
        std::sort(sum.begin(), sum.end());
        std::cout << "\n";
        for (int i = 0; i < sum.size(); ++i)
        {
            if (i == 0 && sum[i] != sum[i + 1])
            {
                result.push_back(sum[i]);
            }
            else if (i != sum.size() - 1 && i != 0 && sum[i] != sum[i - 1] && sum[i] != sum[i + 1])
            {
                result.push_back(sum[i]);
            }
            else if (i == sum.size() - 1 && sum[i] != sum[i - 1])
            {
                result.push_back(sum[i]);
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