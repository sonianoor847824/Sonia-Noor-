#include <iostream>
using namespace std;

string calculatePoolState(int V, int P1, int P2, double H) {
    double totalWater = (P1 + P2) * H;

    if (totalWater <= V) {
        double poolPercent = (totalWater / V) * 100;
        double p1Percent = ((P1 * H) / totalWater) * 100;
        double p2Percent = ((P2 * H) / totalWater) * 100;

        return "The pool is " + to_string((int)poolPercent) +
               "% full. Pipe 1: " + to_string((int)p1Percent) +
               "%. Pipe 2: " + to_string((int)p2Percent) + "%.";
    } 
    else {
        double overflow = totalWater - V;
        return "For " + to_string(H) +
               " hours the pool overflows with " +
               to_string(overflow) + " liters.";
    }
}

int main() {
    int V, P1, P2;
    double H;

    cout << "Enter pool volume: ";
    cin >> V;

    cout << "Enter pipe 1 rate: ";
    cin >> P1;

    cout << "Enter pipe 2 rate: ";
    cin >> P2;

    cout << "Enter hours: ";
    cin >> H;

    cout << calculatePoolState(V, P1, P2, H) << endl;

    return 0;
}