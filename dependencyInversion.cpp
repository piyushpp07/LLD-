#include <iostream>
using namespace std;
// in dependency inversion principle, high level module should not depend on low
// level module both should depend on abstraction abstraction should not depend
// on details, details should depend on abstraction high level module should not
// depend on low level module both should depend on abstraction abstraction
class Engine {
   public:
    virtual void start() = 0;
    virtual ~Engine() = default;
};

class PetrolEngine : public Engine {
   public:
    void start() override { cout << "Petrol Engine started" << endl; }
};

class ElectricEngine : public Engine {
   public:
    void start() override { cout << "Electric Engine started" << endl; }
};

class Car {
   public:
    Engine *engine_;
    Car(Engine *engine) : engine_(engine) {}
    void start() { engine_->start(); }
};
int main() {
    PetrolEngine pe;
    ElectricEngine ee;
    Car c1(&pe);
    c1.start();

    Car c2(&ee);
    c2.start();
    return 0;
}

// ✔ High - level modules(Car)
// should not depend on low - level modules(PetrolEngine, ElectricEngine)

// ✔ Both should depend on abstractions(Engine interface)

// Now,
// the Car class is future - proof and easy to maintain.
