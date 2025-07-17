#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_set>

int main() {
    int x, result;
    std::string line1, line2;
    std::vector<int> arr1, arr2;
    std::getline(std::cin, line1);
    std::getline(std::cin, line2);
    std::istringstream iss(line1);
    while (iss >> x) arr1.push_back(x);
    for (char c : line2) arr2.push_back(c - '0');
    std::unordered_set<int> set_arr1(arr1.begin(), arr1.end());
    std::unordered_set<int> set_arr2(arr2.begin(), arr2.end());
    for (int i : set_arr2) {
        if (!set_arr1.count(i)) result++;
    }
    std::cout << result << std::endl;
    return 0;
}