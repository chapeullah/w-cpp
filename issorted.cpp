#include <iostream>
#include <vector>

int main() {
    int i = 0;
    std::vector<int> arr;
    while (std::cin >> i) arr.push_back(i);
    for (int i = 1; i < arr.size(); i++) if (arr[i] <= arr[i - 1]) {
        std::cout << "NO";
        return 0;
    }
    std::cout << "YES";
    return 0;
}