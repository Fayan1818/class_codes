#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    float marks;

public:
    void setData(int i, string n, float m) {
        id = i;
        name = n;
        marks = m;
    }

    void display() {
        cout << "ID: " << id << "\nName: " << name << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setData(101, "Fayan", 85.5);
    s.display();
    return 0;
}
