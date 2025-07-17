#include <iostream>
#include <cmath>

class Solution 
{
public:
    int countTriples(int n) 
    {
        int a2, b2, c2, cc2, c, result = 0, it = 0;
        for (int a = 1; a <= n; ++a)
        {
            a2 = a * a;
            for (int b = 1; b <= n; ++b)
            {
                b2 = b * b;
                c2 = a2 + b2;
                c = sqrt(c2);
                cc2 = c * c;
                if (cc2 == c2 && c <= n)
                {
                    ++result;
                }
                std::cout << "iteration: " << it++ << "\n";
            }
        }
        return result;
    }
};

int main() 
{
    Solution s;
    std::cout << s.countTriples(250);
    return 0;
}