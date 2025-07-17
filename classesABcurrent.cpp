#include <iostream>

struct ABase
{
    ABase()
    {
        std::cout << "ABase\n";
    }
    ~ABase()
    {
        std::cout << "~ABase\n";
    }
};

struct BBase
{
    BBase()
    {
        std::cout << "BBase\n";
    }
    ~BBase()
    {
        std::cout << "~BBase\n";
    }
};

struct AField
{
    AField()
    {
        std::cout << "AField\n";
    }
    ~AField()
    {
        std::cout << "~AField\n";
    }
    int x = 10;
};

struct BField
{
    BField()
    {
        std::cout << "BField\n";
    }
    ~BField()
    {
        std::cout << "~BField\n";
    }
};

struct current : AField, BField
{
    current()
    {
        std::cout << "current\n";
    }
    ~current()
    {
        std::cout << "~current\n";
    }
    void xcout()
    {
        std::cout << x << "\n";
    }
    ABase a;
    BBase b;
};

int main() {
    current c;
    c.xcout();
    return 0;
}