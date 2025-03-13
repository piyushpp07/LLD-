// weak ownership
// 2. Aggregation (Strong Relationship)
// Analogy : A school has teachers, but if the school closes, teachers still
// exist.

#include <iostream>
using namespace std;

class Teacher {
   public:
    string name_;
    Teacher(string name) : name_(name) {}
    void teach() { cout << name_ << " is teaching..." << endl; }
};

class School {
   public:
    Teacher *teacher_;
    School(Teacher *teacher) : teacher_(teacher) {}
    void startClass() { teacher_->teach(); }
};
int main() {
    Teacher t("Vinay");
    School s(&t);
    s.startClass();
    return 0;
}
// ✅ "Has-a" relationship, but objects can exist independently.
// Aggregation	Hollow Diamond ◇———>	School ◇———> Teacher school loosely
// dependent on teacher