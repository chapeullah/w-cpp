#include <iostream>
#include <sstream>

int main() 
{
    std::string str = "Hi,my,name,is,denis", token;
    std::stringstream ss(str);
    while (std::getline(ss, token, ','))
    {
        std::cout << token << std::endl;
    }
    return 0;
}