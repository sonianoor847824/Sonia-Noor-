#include <iostream>
#include <iomanip>
using namespace std;

string timeTravel(int hour, int minute) {
    minute += 15;

    if (minute >= 60) {
        minute = minute - 60;
        hour = hour + 1;
    }

    if (hour >= 24) {
        hour = 0;
    }

    string hh = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
    string mm = (minute < 10) ? "0" + to_string(minute) : to_string(minute);

    return hh + ":" + mm;
}

int main() {
    int hour, minute;

    cout << "Enter hour: ";
    cin >> hour;

    cout << "Enter minute: ";
    cin >> minute;

    cout << timeTravel(hour, minute) << endl;

    return 0;
}