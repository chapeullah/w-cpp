#include <iostream>
#include <string>

class Solution 
{
public:
    std::string addStrings(std::string num1, std::string num2) 
    {
        int i1 = num1.size() - 1, i2 = num2.size() - 1, temp = 0, sum, x, digit1, digit2;
        std::string result;
        while (i1 >= 0 || i2 >= 0 || temp)
        {
            digit1 = (i1 >= 0) ? num1[i1] - '0' : 0;
            digit2 = (i2 >= 0) ? num2[i2] - '0' : 0;
            sum = digit1 + digit2 + temp;
            x = sum % 10;
            temp = sum / 10;
            result.push_back(x + '0');
            --i1, --i2;
        }
        return reverse(result);
    }
    
    std::string reverse(std::string str)
    {
        int left = 0, right = str.size() - 1;
        char temp;
        while (left < right)
        {
            temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            ++left, --right;
        }
        return str;
    }
};

int main() 
{
    Solution s;
    std::cout << s.addStrings("1111", "9999");
    return 0;
}