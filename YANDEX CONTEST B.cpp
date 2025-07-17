#include <iostream>
#include <vector>
#include <cmath>

int main() 
{
    int n;
    std::cin >> n;
    std::vector<long long> qVec(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> qVec[i];
    }
    std::vector<int> cVec(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> cVec[i];
    }
    long long a, b;
    std::cin >> a >> b;
    std::vector<long long> dVec(n);
    for (int i = 0; i < n; ++i)
    {
        double x;
        if (a < b)
        {
            x = a + (b - a) * cVec[i] / 255.0;
        }
        else
        {
            x = a;
        }
        dVec[i] = static_cast<long long>(std::round(x));
    }
    long long result = 0;
    for (int i = 0; i < n; ++i)
    {
        result += qVec[i] * dVec[i];
    }
    std::cout << result;
    return 0;
}