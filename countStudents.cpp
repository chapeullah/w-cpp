#include <iostream>
#include <vector>
#include <unordered_map>


class Solution 
{
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) 
    {
        std::unordered_map<int, int> map;
        int size = students.size(), result = 0;
        for (int i : students)
        {
            ++map[i];
        }
        for (int i = 0; i < sandwiches.size(); ++i)
        {
            if (map[sandwiches[i]] != 0) 
            {
                --map[sandwiches[i]];
            }
            else
            {
                result = sandwiches.size() - i - 1;
                break;
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