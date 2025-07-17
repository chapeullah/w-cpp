#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>

int main() 
{
    std::string temp;
    std::vector<std::string> input, x;
    while (std::cin >> temp)
    {
        input.emplace_back(temp);
    }
    for (int i = 1; i < input.size(); ++i)
    {
        std::vector<std::string> line;
        std::stringstream ss(input[i]);
        while (std::getline(ss, temp, ','))
        {
            line.emplace_back(temp);
        }
        std::string name = line[0] + line[1] + line[2];
        std::unordered_set<char> nameSet(name.begin(), name.end());
        int nameLength = 0;
        for (char ch : nameSet)
        {
            ++nameLength;
        }
        std::string date = line[3] + line[4];
        int dateInt = 0;
        for (char ch : date)
        {
            dateInt += ch - '0';
        }
        int firstNameInt = line[0][0] - 'A' + 1;
        int result = nameLength + dateInt * 64 + firstNameInt * 256;
        std::stringstream hexStream;
        hexStream << std::uppercase << std::hex << result;
        std::string hexStr = hexStream.str();
        if (hexStr.length() < 3)
        {
            hexStr = std::string(3 - hexStr.length(), '0') + hexStr;
        }
        else
        {
            hexStr = hexStr.substr(hexStr.length() - 3);
        }
        x.emplace_back(hexStr);
    }
    for (int i = 0; i < x.size(); ++i)
    {
        std::cout << x[i] << " ";
    }
    return 0;
}