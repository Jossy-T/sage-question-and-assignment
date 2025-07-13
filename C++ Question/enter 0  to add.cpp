#include <iostream>
using namespace std;

int main() {
    int number;
    int sum ;

    cout << "Enter numbers to sum (enter numbers with space and enter 0 to stop):" << endl;

    do {
        cin >> number;
        sum = sum + number;
    } while (number != 0);

    cout << "The sum of all entered numbers is: " << sum << endl;

    return 0;
}

