#include <iostream>
using namespace std;

int main() {
	int time, result, hour, minute, second;
	cout << "Enter the time in sec: ";
	cin >> time;
	result = 86400 - time;
	hour = result / 3600;
	minute = (result % 3600) / 60;
	second = result % 60;

	cout << "Until the end of the day: " << hour << " hours " << minute << " minutes " << second << " seconds" << endl;

	return 0;
}

