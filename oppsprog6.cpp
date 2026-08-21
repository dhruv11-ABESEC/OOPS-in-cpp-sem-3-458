//develop a proigram to demonstrate diff type of cons. and dest. behaviour a object life cycle management
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student() {
        rollNo = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    cout << "Object 1:" << endl;
    Student s1;
    s1.display();

    cout << "\nObject 2:" << endl;
    Student s2(101, "Dhruv");
    s2.display();

    cout << "\nObject 3:" << endl;
    Student s3 = s2;
    s3.display();

    cout << "\nEnd of main()" << endl;

    return 0;
} 