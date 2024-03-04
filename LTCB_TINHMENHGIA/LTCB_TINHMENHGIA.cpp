#include <iostream>
using namespace std;
int main() {
	int sotien, soto500, soto200, soto100, soto50, soto20, soto10, soto5, soto1;
	cout << "nhap so tien can rut (don vi nghin dong):";
	cin >> sotien;
	while (sotien > 0)
	{
		cout << "|----------------------------------------|" << endl;
		soto500 = sotien / 500;
		sotien = sotien % 500;
		cout << "so to 500 la" << soto500 << endl;

		soto200 = sotien/ 200;
		sotien = sotien % 200;
		cout << "so to 200 la" << soto200 << endl;

		soto100 = sotien / 100;
		sotien = sotien % 100;
		cout << "so to 100 la" << soto100 << endl;

		soto50 = sotien / 50;
		sotien = sotien % 50;
		cout << "so to 50 la" << soto50 << endl;

		soto20 = sotien/ 20;
		sotien = sotien % 20;
		cout << "so to 20 la" << soto20 << endl;

		soto10 = sotien / 10;
		sotien = sotien % 10;
		cout << "so to 10 la" << soto10 << endl;

		soto5 = sotien / 5;
		sotien = sotien % 5;
		cout << "so to 5 la" << soto5 << endl;

		soto1 = sotien / 1;
		sotien = sotien % 1;
		cout << "so to 1 la" << soto1 << endl;



	}

	return 0;
}


