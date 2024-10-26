#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int num1;  // Number declared in the base class
public:
    Base(int n1) : num1(n1) {}  // Constructor to initialize num1
};

// First derived class inheriting from Base class
class Derived1 : public Base {
protected:
    int num2;  // Number declared in the first derived class
public:
    Derived1(int n1, int n2) : Base(n1), num2(n2) {}  // Constructor to initialize num1 and num2
};

// Second derived class inheriting from Derived1 class
class Derived2 : public Derived1 {
public:
    Derived2(int n1, int n2) : Derived1(n1, n2) {}  // Constructor to initialize numbers via multilevel inheritance

    // Function to calculate and display the sum of num1 and num2
    void displaySum() {
        int sum = num1 + num2;
        cout << "Sum of two numbers: " << sum << endl;
    }
};

int main() {
    // Create an object of Derived2 class with values for num1 and num2
    Derived2 obj(10, 20);

    // Call the function to display the sum of the two numbers
    obj.displaySum();

    return 0;
}
