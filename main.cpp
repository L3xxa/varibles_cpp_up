#include <iostream>
using namespace std;

int main() {
	cout << "\033[1;31mCalculation of the volume of the parallelepiped.\033[0m" << endl;
	cout << "\033[1;31mEnter the output data:\033[0m" << endl;
	double L, W, H, V;
	cout << "\033[1;33mLength (cm) => \033[0m";
	cin >> L;
	cout << "\033[1;33mWidth (cm) => \033[0m";
	cin >> W;
	cout << "\033[1;33mHeight (cm) => \033[0m";
	cin >> H;
	V = L * W * H;
	cout << "\033[1;33mVolume (cm^3) => \033[0m" << V << endl;

	return 0;
}
