#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

class Vechicle {
   public:
    virtual void move() = 0;
};
class VehicleWithEngine : public Vechicle {
   public:
    void move() override { cout << "Vehicle with engine is moving" << endl; }
};
class VehicleWithoutEngine : public Vechicle {
   public:
    void move() override { cout << "Vehicle without engine is moving" << endl; }
};

class Car : public VehicleWithEngine {
   public:
    void move() override { cout << "Car is moving" << endl; }
};
class Bicycle : public VehicleWithoutEngine {
   public:
    void move() override { cout << "Bicycle is moving" << endl; }
};

int main() {
    Car c;
    Bicycle b;
    c.move();
    b.move();
    return 0;
}
// In this example, we have a base class Vehicle and two derived classes Car and
// Bicycle. The Car class is derived from VehicleWithEngine and the Bicycle
// class is derived from VehicleWithoutEngine. The VehicleWithEngine and
// VehicleWithoutEngine classes are derived from the Vehicle class. The move
// function is overridden in all the classes. The Car class is a Vehicle with an
// engine, so it is derived from VehicleWithEngine. The Bicycle class is a
// Vehicle without an engine, so it is derived from VehicleWithoutEngine. The
// move function is overridden in all the classes. Liskov's Substitution
// Principle states that objects of a superclass should be replaceable with
// objects of its subclasses without affecting the correctness of the program.