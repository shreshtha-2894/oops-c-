#include <iostream>
using namespace std;

class Sum {
private:
    int n;
    int sum;

public:
    // Default constructor
    Sum() {
        cout << "Enter the value of n: ";
        cin >> n;
        sum = 0;

        // Calculating the sum of n natural numbers
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        // Output the result
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    // Create an object of the class
    Sum obj;
    return 0;
}
