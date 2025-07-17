#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x){
        int temp = x;
        long int result = 0;
        if (temp >= 0){
            while (temp > 0){
                int z = temp % 10;
                result = result * 10 + z;
                temp = temp / 10;
            }
            return result == x;
        }      
        return false;
    }
};

int main() {
    Solution solution;
    cout << solution.isPalindrome(0);
    return 0;
}