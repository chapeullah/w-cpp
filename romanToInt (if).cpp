#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i {0}; i < s.size(); i++){
            if (s[i] == 'I'){
                if (s[i+1] == 'V' || s[i+1] == 'X'){
                    sum -= 1;
                }
                else{
                    sum += 1;
                }
            }
            if (s[i] == 'V'){
                sum += 5;
            }
            if (s[i] == 'X'){
                if (s[i+1] == 'L' || s[i+1] == 'C'){
                    sum -= 10;
                }
                else{
                    sum += 10;
                }
            }
            if (s[i] == 'L'){
                sum += 50;
            }
            if (s[i] == 'C'){
                if (s[i+1] == 'D' || s[i+1] == 'M'){
                    sum -= 100;
                }
                else{
                    sum += 100;
                }
            }
            if (s[i] == 'D'){
                sum += 500;
            }
            if (s[i] == 'M'){
                sum += 1000;
            }
        }
        return sum;
    }
};
int main() {
    Solution solution;
    cout << solution.romanToInt("MCMXCIV") << endl;
    return 0;
}