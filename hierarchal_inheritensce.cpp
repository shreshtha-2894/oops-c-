#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int num1, num2;  
public:
    Base(int n1, int n2) : num1(n1), num2(n2) {}  
};

class Derived1 : public Base {
public:
    Derived1(int n1, int n2) : Base(n1, n2) {}  

    void displayFirstNumber() {
        cout << "First number: " << num1 << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int n1, int n2) : Base(n1, n2) {}  

    void displaySecondNumber() {
        cout << "Second number: " << num2 << endl;
    }
};

int main() {
    Derived1 obj1(1, 2);
    obj1.displayFirstNumber();  

    Derived2 obj2(1, 2);
    obj2.displaySecondNumber();  

    return 0;
}
