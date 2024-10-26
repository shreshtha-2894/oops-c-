#include <iostream>
using namespace std;

class Sum {
public:
    // Constructor for two integer values
    Sum(int a, int b) {
        cout << "Sum of integers: " << a + b << endl;
    }

    // Constructor for two float values
    Sum(float a, float b) {
        cout << "Sum of floats: " << a + b << endl;
    }

    // Constructor for two char values (adds their ASCII values)
    Sum(char a, char b) {
        cout << "Sum of ASCII values of chars: " << (int)a + (int)b << endl;
    }
};

int main() {
    // Create objects of Sum class with different types of arguments
    Sum sum1(5, 10);         // Calls constructor for integers
    Sum sum2(5.5f, 4.3f);    // Calls constructor for floats
    Sum sum3('A', 'B');      // Calls constructor for characters

    return 0;
}
