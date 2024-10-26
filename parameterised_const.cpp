#include <iostream>
using namespace std;
class SwapNum {
private:
    int a, b;

public:
    // Parameterized constructor
    SwapNum(int x, int y) {
        a = x;
        b = y;
        cout << "Before swap: a = " << a << ", b = " << b << endl;

        // Swapping the numbers
        int c = a;
        a = b;
        b = c;

        cout << "After swap: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int n1, n2;

    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // Creating an object of the class and passing two numbers to the parameterized constructor
    SwapNum obj(n1, n2);
    return 0;
}
