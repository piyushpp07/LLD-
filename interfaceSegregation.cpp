#include <iostream>

using namespace std;

class Printer {
   public:
    virtual void print() = 0;
};
class Scanner {
   public:
    virtual void scan() = 0;
};
class Fax {
   public:
    virtual void fax() = 0;
};
class SimplePrinter : public Printer {
   public:
    void print() override { cout << "Simple Printer is printing" << endl; }
};

int main() {
    SimplePrinter sp;
    sp.print();
    return 0;
}

// interface segregation principle states that a client should not be forced to
// implement an interface that it does not use. Instead of creating a single
// interface with all the methods, we should create multiple interfaces with
// fewer methods. This way, the client can implement only the methods it needs.