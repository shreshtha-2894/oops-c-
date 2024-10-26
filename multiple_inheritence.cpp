#include <iostream>
using namespace std;

// First base class
class Base1 {
protected:
    int num1;  
public:
    Base1(int n1) : num1(n1) {}  
};

// Second base class
class Base2 {
protected:
    int num2;  
public:
    Base2(int n2) : num2(n2) {}  
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    Derived(int n1, int n2) : Base1(n1), Base2(n2) {}

    void displaySum() {
        int sum = num1 + num2;
        cout << "Sum of two numbers: " << sum << endl;
    }
};

int main() {
    Derived obj(20, 20);

    obj.displaySum();

    return 0;
}
