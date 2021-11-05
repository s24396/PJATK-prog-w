#include <iostream>
using namespace std;

int main() {
	int iloscWyrazow;
	int suma = 0;
	int kolejnyWyraz = 0;

	for (int iloscWyrazow = 1; iloscWyrazow <= 5; iloscWyrazow++) {

		suma = iloscWyrazow + kolejnyWyraz;

		if (suma <= 1) {
			cout << "1 = 1" << endl;
		}
		//cout << suma << " " << endl;

		kolejnyWyraz++;

		if (suma <= 2) {
			cout << "1 + 2 = 3" << endl;
		}

		kolejnyWyraz++;

		if (suma <= 3) {
			cout << "1 + 2 + 3 = 6" << endl;
		}

		kolejnyWyraz++;

		if (suma <= 4) {
			cout << "1 + 2 + 3 + 4 = 10" << endl;
		}

		kolejnyWyraz++;

		if (suma <= 3) {
			cout << "1 + 2 + 3 ""+ 4 + 5 = 15" << endl;
		}

		kolejnyWyraz++;

	}

	cout << "Suma szeregu: 1 + 3 + 6 + 10 + 15 = 35" << endl;

		return 0;
}