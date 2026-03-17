#include <iostream>
using namespace std;

int main() {
    int n, num;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    cout << "Enter total numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;

        if (num <= 200)
            c1++;
        else if ( num >200 && num <= 399 )
            c2++;
        else if (num >399 && num <= 599)
            c3++;
        else if (num >599 && num <= 799)
            c4++;
        else if( num > 799 && num <=1000 )
            c5++;
    }
    double p1 = (c1 * 100.0) / n;
    double p2 = (c2 * 100.0) / n;
    double p3 = (c3 * 100.0) / n;
    double p4 = (c4 * 100.0) / n;
    double p5 = (c5 * 100.0) / n;

    cout << "p1 (<200): " << p1 << "%" << endl;
    cout << "p2 (200-399): " << p2 << "%" << endl;
    cout << "p3 (400-599): " << p3 << "%" << endl;
    cout << "p4 (600-799): " << p4 << "%" << endl;
    cout << "p5 (>=800): " << p5 << "%" << endl;

}