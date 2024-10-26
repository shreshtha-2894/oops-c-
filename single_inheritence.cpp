 #include <iostream>
using namespace std;

class Base {
protected:
    int n1, n2;

public:
    Base(int x, int y) {
        n1 = x;
        n2 = y;
    }
};
class Derived : public Base {
public:
    Derived(int x, int y) : Base(x, y) {}

    void displayProduct() {
        cout << "Product of " << n1 << " and " << n2 << " is: " << n1 * n2 << endl;
    }
};

int main() {
    Derived obj(5, 10);

    obj.displayProduct();

    return 0;
}
