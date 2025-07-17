#include <iostream>
#include <vector>

int main() {
    std::string str;
    std::vector<std::string> input;
    while (std::cin >> str) {
        input.push_back(str);
    }
    for (int i = 1; i < input.size() - 1; i += 2) {
        if (input[i] == input.back()) std::cout << input[i + 1] << "\n";
        else if (input[i + 1] == input.back()) std::cout << input[i] << "\n";
    }
    return 0;
}