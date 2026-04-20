#include <iostream>
using namespace std;

bool isSymmetrical(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        reverse = reverse * 10 + (num % 10);
        num = num / 10;
    }

    return original == reverse;
}

int main() {
    int num;

    cout << "Enter 3-digit number: ";
    cin >> num;

    if (isSymmetrical(num))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}