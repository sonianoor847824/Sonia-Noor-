#include <iostream>
using namespace std;

int main() {
    float X;
    int Y;
    cin >> X >> Y;
    float totalSpent = 0;
    for (int year = 1800; year <= Y; year++) {
        int age = 18 + (year - 1800);

        if (year % 2 == 0) {
            totalSpent += 12000;
        } else {
            totalSpent += 12000 + 50 * age;
        }
    }
    if (X >= totalSpent) {
        cout << "Yes! He will live a carefree life and will have "
             << (X - totalSpent) << " dollars left." << endl;
    } else {
        cout << "He will need "
             << (totalSpent - X) << " dollars to survive." << endl;
    }
}