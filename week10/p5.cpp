#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;

    cout << " quadratic equation (ax^2 + bx + c = 0)" << endl;
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter constant c: ";
    cin >> c;
    if (a == 0) {
        cout << "Error: 'a' cannot be zero for a quadratic equation." << endl;
        return 1;
    }
    discriminant = b * b - 4 * a * c;

    cout << "\nResults:" << endl;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2= (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "root1 = " << root1 << endl;
        cout << "root2 = " << root2 << endl;
    }
    
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "root1 = root2 = " << root1 << endl;
    }
    
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex (no real solutions)." << endl;
        cout << "root1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "root2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}

