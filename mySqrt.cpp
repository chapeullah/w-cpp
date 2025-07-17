#include <iostream>
class Solution {
public:
    int mySqrt(int x) {
        int y = 0, i = 0;
        while (y < x) {
            i++;
            y = i * i;
        }
        return i;
    }
};

int main() {
    Solution solution;
    std::cout << solution.mySqrt(4);
    return 0;
}