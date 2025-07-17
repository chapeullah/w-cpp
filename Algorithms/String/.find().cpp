#include <iostream>

int main() {
    std::string str = "qwerty123";
    std::string target = "q";
    if (str.find(target) != std::string::npos) {
        std::cout << "Index of target \"" << target << "\": " << str.find(target);
    } else {
        std::cout << "Not found.";
    }
    return 0;
}