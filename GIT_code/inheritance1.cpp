#include <iostream>
using namespace std;


class Student {
public:
    int id;
    float marks;
    string name;

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};


class Fayan : public Student {
public:
    void setData() {
        id = 1;
        name = "Fayan";
        marks = 95.5;
    }
};

int main() {
    Fayan obj;
    obj.setData();
    obj.display();
    return 0;
}
