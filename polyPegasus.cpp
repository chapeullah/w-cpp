
#include <iostream>

class Horse
{
public:
    Horse() { std::cout << "Horse constructor\n"; }
    virtual ~Horse() { std::cout << "Horse destructor\n"; }
    
    virtual void Whinny() const { std::cout << "Whinny!\n"; }
    void Gallop() const { std::cout << "Galloping\n"; }

private:
    int itsAge;
};

class Bird
{
public:
    Bird() { std::cout << "Bird constructor\n"; }
    virtual ~Bird() { std::cout << "Bird destructor\n"; }
    virtual void chirp() const { std::cout << "Chirp\n"; }
    virtual void Fly() const 
    { 
        std::cout << "I can fly! I can fly! I can fly!\n"; 
    }

private:
    int itsWeight;
};

class Pegasus : public Horse, public Bird
{
public:
    Pegasus() { std::cout << "Pegasus constructor\n"; }
    ~Pegasus() { std::cout << "Pegasus destructor\n"; }

    void Chirp() const { Whinny(); }
};


const int number = 2;
int main()
{
    Horse *ranch[number];
    Bird *aviary[number];
    Horse *pHorse;
    Bird *pBird;
    for (int i = 0; i < number; ++i)
    {
        std::cout << "Please chose (1)Horse / (2)Pegasus: ";
        int choice;
        std::cin >> choice;
        if (choice == 1)
        {
            pHorse = new Pegasus;
        }
        else
        {
            pHorse = new Horse;
        }
        ranch[i] = pHorse;
    }
    for (int i = 0; i < number; ++i)
    {
        std::cout << "Please chose (1)Bird / (2)Pegasus: ";
        int choice;
        std::cin >> choice;
        if (choice == 1)
        {
            pBird = new Pegasus;
        }
        else
        {
            pBird = new Bird;
        }
        aviary[i] = pBird;
    }
    std::cout << "\n";
    for (int i = 0; i < number; ++i)
    {
        std::cout << "Ranch[" << i << "]: ";
        ranch[i]->Whinny();
        delete ranch[i];
    }
    for (int i = 0; i < number; ++i)
    {
        std::cout << "\nAviary[" << i << "]: ";
        aviary[i]->chirp();
        aviary[i]->Fly();
        delete aviary[i];
    }
    return 0;
}
