// 1. Association (Loose Relationship)
// Analogy: A teacher and a student are related, but they can exist
// independently.

#include <iostream>
using namespace std;

class Teacher {
   public:
    void teach() { cout << "Teaching..." << endl; }
};
class Student {
   public:
    void learn() { cout << "Learning..." << endl; }
};

int main() {
    Teacher t;
    Student s;
    t.teach();
    s.learn();
    return 0;
}
// ✅ No ownership, just a relationship.
// ✅ Objects can exist independently.
// ✅ Objects can be reused.
// ✅ Objects can be replaced.
// ✅ Objects can be extended.
// ✅ Objects can be deleted.
// ✅ Objects can be created at runtime.
// Association	Solid Line ———>	Teacher ⬄ Student
