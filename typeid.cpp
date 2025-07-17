#include <iostream>
#include <typeinfo>

class Base { public: virtual ~Base() {} };
class Derived : public Base {};

int main() {
    Base* b = new Derived;

    const std::type_info& t = typeid(*b);
    std::cout << "Тип: " << t.name() << '\n';
}