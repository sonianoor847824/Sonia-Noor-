#include <iostream>
using namespace std;
 main() {
    int number, digit, count = 0, rem;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the digit to find: ";
    cin >> digit;

    while (number != 0) {
        rem = number % 10;

        if (rem == digit) {
            count++;
        }

        number = number / 10;
    }

    cout << "Frequency of " << digit << " = " << count;


}