#include <iostream>
using namespace std;

class Baker {
   public:
    void bakeBread() { cout << "Bread is baking" << endl; }
};
class Cleaner {
   public:
    void cleanHouse() { cout << "House is cleaning" << endl; }
};
// wrong way
// class Baker {
//    public:
//     void bakeBread() { cout << "Bread is baking" << endl; }  // this is wrong
//     void cleanHouse() { cout << "House is cleaning" << endl; }
// };

int main() {
    Baker b;
    Cleaner c;
    b.bakeBread();
    c.cleanHouse();
    return 0;
}