#include <iostream>
#include <algorithm>


int main() {
    std::string str1 = "qwerty123", str2 = "Qwerty123";
    
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 == str2) std::cout << "String 1 == string 2";
    else std::cout << "String 1 != string 2";
    return 0;
}