#include <iostream>

bool answer()
{
    char ans;
    std::cout << "Continue? (y/n. Default = n)\n";
    std::cin >> ans;
    switch (ans)
    {
        case 'y':
        {   
            std::cout << "Case 'y' chosen. \"YES\"\n";
            return true;
        }
        case 'n':
        {
            std::cout << "Case 'n' chosen. \"NO\"\n";
            return false;
        }
        default:
        {
            std::cout << "Default case chosen. \"NO\"\n";
            return false;
        }
    }
}

int main() {
    answer();
    return 0;
}