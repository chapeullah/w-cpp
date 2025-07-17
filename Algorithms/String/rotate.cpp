#include <iostream>
#include <algorithm>

int main() 
{
    std::string str = "12345";

    std::rotate(str.begin(), str.begin() + 1, str.end());

    std::cout << "Результат: " << str << std::endl;
    
    return 0;
}