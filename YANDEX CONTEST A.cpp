#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() 
{
    int n, m, x, y, result = 0;
    std::string temp;
    std::cin >> n >> m >> x >> y;
    std::getline(std::cin, temp);
    std::vector<std::string> vec(n * x);
    for (int i = 0; i < n * x; ++i)
    {
        std::getline(std::cin, vec[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int count = 0;
            for (int o = 0; o < x; ++o)
            {
                for (int k = 0; k < y; ++k)
                {
                    int p = i * x + o;
                    int l = j * y + k;
                    if (vec[p][l] == 'X') 
                    {
                        ++count;
                    }
                }
            }
            if (count >= (x * y + 1) / 2)
            {
                ++result;
            }
        }
    }
    std::cout << result;
    return 0;
}