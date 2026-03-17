#include <iostream>
using namespace std;
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
}
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}
 main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD (HCF) = "  << endl;
    cout << "LCM = "  << endl;

}