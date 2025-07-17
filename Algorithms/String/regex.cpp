#include <iostream>
#include <regex>

int main() {
    std::string str = "qwerty123";
    std::regex pattern("\\d+");
    std::smatch match;
    if (std::regex_search(str, match, pattern)) std::cout << "Найдено число в строке: " << match.str() << "\n";
    else std::cout << "Число НЕ найдено в строке.\n";
    return 0;
}