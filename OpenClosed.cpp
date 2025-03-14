#include <iostream>
using namespace std;
// we can add more signal by creating new class rather than modifying existing
// class
class TrafficController {
   public:
    virtual void showSignal() = 0;   // pure virtual function
    virtual ~TrafficController() {}  // virtual destructor
};
class redSignal : public TrafficController {
   public:
    void showSignal() { cout << "Red Signal" << endl; }
};
class greenSignal : public TrafficController {
   public:
    void showSignal() { cout << "Green Signal" << endl; }
};

class Controller {
   public:
    void control(TrafficController &tc) { tc.showSignal(); }
};

int main() {
    redSignal r;
    greenSignal g;
    Controller c;
    c.control(r);
    c.control(g);
    return 0;
}
// we can add more signal by creating new class rather than modifying existing
// class