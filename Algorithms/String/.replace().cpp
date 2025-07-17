#include <iostream>

int main() {
    std::string str = "qwerty123";
    str.replace(6, 3, "Sosi");
    std::cout << str;
    return 0;
}