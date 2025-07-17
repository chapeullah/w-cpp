#include <iostream>
#include <string>

class Solution 
{
public:
    std::string addStrings(std::string num1, std::string num2) 
    {
        int num1res = 0, num2res = 0;
        for (char ch : num1)
        {
            num1res = num1res * 10 + (ch - '0');
        }
        for (char ch : num2)
        {
            num2res = num2res * 10 + (ch - '0');
        }
        int sum = num1res + num2res, temp;
        if (sum == 0)
        {
            return "0";
        }
        std::string result;
        while (sum > 0)
        {
            temp = sum % 10;
            sum = sum / 10;
            result.push_back(temp + '0');
        }
        int left = 0, right = result.size() - 1;
        char tempCh;
        while (left < right)
        {
            tempCh = result[right];
            result[right] = result[left];
            result[left] = tempCh;
            ++left, --right;
        }
        return result;
    }
};

int main() 
{
    Solution s;
    std::cout << s.addStrings("123", "456");
    return 0;
}