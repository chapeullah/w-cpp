#include <iostream>

int main() {
    std::string str = "  Hello, world!   ";
    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);
    std::cout << "\"" << str << "\"";
    return 0;
}