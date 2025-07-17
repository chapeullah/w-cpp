#include <iostream>
#include <algorithm>

int main() {
    std::string str1 = "qwerTy", str2 = "HELLo, WOrlD!";
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    std::cout << "str1 = " << str1 << ", str2 = " << str2;
    return 0;
}