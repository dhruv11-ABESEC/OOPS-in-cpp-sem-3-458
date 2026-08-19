#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 10;
    cout << "Value inside callByValue(): " << x << endl;  
}

void callByReference(int &x) {
    x = x + 10;
    cout << "Value inside callByReference(): " << x << endl;
}

int main() {
    int num = 20;

    cout << "Original Value: " << num << endl;
    callByValue(num);
    cout << "Value after callByValue(): " << num << endl;

    callByReference(num);
    cout << "Value after callByReference(): " << num << endl;

    return 0;
}