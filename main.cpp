#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int year; // Declare the variable year
    cout << "Enter a year: ";
    cin >> year;
    int days = 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    cout << "the number of days in the year " << year << " is " << days << endl;

    return 0;
}
