#include <iostream>
using namespace std;

class Student {
public:
    int age;

    // Normal constructor
    Student(int a) {
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        age = s.age;
    }
};

int main() {
    Student s1(20);

    // Copying s1 into s2
    Student s2(s1);

    cout << "First Student Age: " << s1.age << endl;
    cout << "Second Student Age: " << s2.age;

    return 0;
}