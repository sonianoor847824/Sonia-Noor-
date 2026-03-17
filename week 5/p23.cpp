#include <iostream>
using namespace std;

int main() {
    int N;
    float P, X;
    cin >> N >> P >> X;
    int toys = 0;
    float money = 0;
    int evenGift = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            evenGift += 10;        
            money += evenGift - 1;  
        } else {
            toys++;
        }
    }
    money += toys * P;
    if (money >= X) {
        cout << "Yes! " << money - X << endl;
    } else {
        cout << "No! " << X - money << endl;
    }
}