#include <iostream>
using namespace std;

string convert(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                       "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    if (num < 10)
        return ones[num];
    else if (num >= 10 && num < 20)
        return teens[num - 10];
    else {
        int t = num / 10;
        int o = num % 10;

        if (o == 0)
            return tens[t];
        else
            return tens[t] + ones[o];
    }
}

int main() {
    int num;

    cout << "Enter number (1-99): ";
    cin >> num;

    cout << convert(num) << endl;

    return 0;
}