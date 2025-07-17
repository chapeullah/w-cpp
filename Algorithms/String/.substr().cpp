#include <iostream>

int main() {
    std::string str = "qwerty123";
    std::string sub = str.substr(6, 3);
    std::cout << sub;
    return 0;
}