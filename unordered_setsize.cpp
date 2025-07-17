#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_set>

int main() {
    std::string string;
    std::unordered_set<std::string> all_input;
    while (std::cin >> string) all_input.insert(string);
    std::cout << all_input.size() << std::endl;
    return 0;
}