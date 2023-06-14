#include <iostream>
#include <cmath>

using namespace std;

class triangle {
	double a, b, c;

	public:
		void sides();
		double surface();
		double perimeter();
		void doesItExist();
		void info();
};

void triangle::sides() {
	do {
		cout << "Input triangle's sides: " << endl;
		cout << "a = ";	cin >> a;
		cout << "b = ";	cin >> b;
		cout << "c = ";	cin >> c;
	} while (a < 0 || b < 0 || c < 0);
}

void triangle::doesItExist() {
	if ((a + b > c) && (b + c > a) && (a + c > b)) cout << "The triangle does exist!" << endl;
	else cout << "The triangle does not exist! Enter valid values!" << endl;
}

double triangle::surface() {
	double surface, semiperimeter;
	semiperimeter = (a + b + c) / 2;
	surface = sqrt(semiperimeter * (semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c));
	cout << "The surface equals to " << surface << endl;
	return 0;
}

double triangle::perimeter() {
	double perimeter;
	perimeter = a + b + c;
	cout << "The perimeter equals to " << perimeter << endl;
	return 0;
}

void triangle::info() {
	cout << "The triangle has" << endl;
	cout << "Side a = " << a << endl;
	cout << "Side b = " << b << endl;
	cout << "Side c = " << c << endl;
}

int main() {
	int switchkey;
	triangle figure;

	figure.sides();

	cout << endl << "* = * = * = * = * = * M E N U * = * = * = * = * = *" << endl;
	cout << "1) Display the information about the triangle." << endl;
	cout << "2) Does the triangle exist? " << endl;
	cout << "3) Display the surface of the triangle." << endl;
	cout << "4) Display the perimeter of the triangle." << endl;
	cout << "5) Terminate the program." << endl << endl;

	do {
		cout << "\nPick an option: ";
		cin >> switchkey;
		switch (switchkey) {
		case 1: {
			figure.info(); break;
		}
		case 2: {
			figure.doesItExist(); break;
		}
		case 3: {
			figure.surface(); break;
		}
		case 4: {
			figure.perimeter(); break;
		}
		default: if (switchkey != 5) cout << endl << "Please pick a valid option from the MENU!" << endl;
		}
	} while (switchkey != 5);

	return 0;
}
