#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A function called." << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B function called." << endl;
    }
};

class C : public A {
public:
    void displayC() {
        cout << "Class C function called." << endl;
    }
};

class D : public A {
public:
    void displayD() {
        cout << "Class D function called." << endl;
    }
};

class E : public B {
public:
    void displayE() {
        cout << "Class E function called." << endl;
    }
};

int main() {
    E objE;
    objE.displayA(); 
    objE.displayB(); 
    objE.displayE(); 
    return 0;
}
