#include <iostream>

class Engine {
public:
    Engine() { std::cout << "Двигеталь создан\n"; }
    ~Engine() { std::cout << "Двигатель уничтожен\n"; }

    void start() {
        std::cout << "Двигатель запущен\n";
    }

    void stop() {
        std::cout << "Двигатель остановлен\n";
    }
};

class Car {
public:
    Car(const std::string& name) : name(name) { std::cout << "Машина создана\n"; }
    ~Car() { std::cout << "Машина уничтожена\n"; }
    
    void start() {
        engine.start();
    }

    void stop() {
        engine.stop();
    }

    std::string getName() {
        return name;
    }
private:
    Engine engine;
    std::string name;
};

class ParkingLot {
    void addCar() {

    }

    void removeCar() {

    }

    void listCars() {

    }
};

int main() {
    Engine e;
    e.start();
    std::cout << "1\n";
	return 0;
}