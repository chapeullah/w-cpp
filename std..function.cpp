#include <iostream>
#include <functional>

void greet() {
    std::cout << "Привет!\n";
}

void bye() {
    std::cout << "Пока!\n";
}

int main() {
    std::function<void()> action;

    int choice;
    std::cout << "Введите 1 (привет) или 2 (пока): ";
    std::cin >> choice;

    if (choice == 1)
        action = greet;
    else
        action = bye;

    action();
}
