#include <iostream>
using namespace std;

int main() {
	cout << "Calculation of the distance between settlements." << endl;
	cout << "Enter the output data: \n";
	double M, d;

	cout << "Map scale -> ";
	cin >> M;
	cout << "Distance between points -> ";
	cin >> d;
	cout << "Distance between settlements: " << M * d << " km" << endl;

	return 0;
}