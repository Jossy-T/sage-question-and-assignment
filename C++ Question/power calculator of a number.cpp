#include <iostream>
using namespace std;

// Function to calculate base^exponent using loop
int power(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result=result* base; 
    }

    return result;
}

int main() {
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent (positive integer): ";
    cin >> exponent;

    int result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
