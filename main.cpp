#include <iostream>
using namespace std;

int main() {
	int sec, hour, time;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	hour = sec / 3600;
	time = 8 - hour;
	cout << "Home in: " << time << "hours" << endl;

    return 0;
}
