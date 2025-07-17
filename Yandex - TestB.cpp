#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>

int main() 
{
    std::string temp1, temp2;
    std::vector<std::vector<std::string>> input;
    std::getline(std::cin, temp1);
    std::map<int, int> rockets;
    while (std::getline(std::cin, temp1))
    {
        int i = 0, sum = 0;
        std::vector<std::string> line;
        std::stringstream stream(temp1);
        while (stream >> temp2)
        {
            switch(i)
            {
                case 0:
                {
                    sum += std::stoi(temp2) * 1440;
                    break;
                }
                case 1:
                {
                    sum += std::stoi(temp2) * 60;
                    break;
                }
                case 2:
                {
                    sum += std::stoi(temp2);
                    line.emplace_back(std::to_string(sum));
                    break;
                }
                default:
                {
                    line.emplace_back(temp2);
                    break;
                }
            }
            ++i;
        }
        input.emplace_back(line);
    }
    temp1 = "0";
    for (int l = 0; l < input.size(); ++l)
    {
        if (input[l][2] == "S" || input[l][2] == "C") temp1 = std::max(input[l][0], temp1);
    }
    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i][2] == "A")
        {
            temp2 = temp1;
            for (int j = 0; j < input.size(); ++j)
            {
                if (input[j][0] >= input[i][0] && (input[j][2] == "S" || input[j][2] == "C") && input[i][1] == input[j][1])
                {
                    temp2 = std::min(temp2, input[j][0]);
                }
            }
            rockets[std::stoi(input[i][1])] += std::stoi(temp2) - std::stoi(input[i][0]);
        }
    }
    for (const auto pair : rockets)
    {
        std::cout << pair.second << " ";
    }
    return 0;
}