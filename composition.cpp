// composition is a relationship in which two classes are highly dependent on
// each other.
//  This is sometimes referred to as a "death" relationship.
//  It means that if one object is destroyed, the other object also loses its
//  meaning. It is a strong type of Aggregation.
//  It is a more specific form of Aggregation. It is a type of association that
//  is used to represent part-whole relationships.
// Analogy: A car has an engine, but if the car is destroyed, the engine is also
// destroyed.
// Composition Filled Diamond ◆———> Car ◆———> Engine car dependent on engine
#include <iostream>
using namespace std;

class Engine {
   public:
    void start() { cout << "Engine started..." << endl; }
    Engine() { cout << "Engine created..." << endl; }
    ~Engine() { cout << "Engine destroyed..." << endl; }
};
class Car {
   private:
    Engine e;

   public:
    Car() { cout << "Car created..." << endl; }
    void start() { e.start(); }
    ~Car() { cout << "Car destroyed..." << endl; }
};
int main() {
    Car c;
    c.start();
    return 0;
}
// ✅ "Part-of" relationship, objects are dependent.