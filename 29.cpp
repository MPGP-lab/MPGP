#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Calc(double a, int b, double c){
	if (b == 1) {
		cout << "[+] Результат: " << a << " + " << c << " = " << a + c << endl;
	}
	if (b == 2) {
		cout << "[+] Результат: " << a << " - " << c << " = " << a - c << endl;
	}
	if (b == 3) {
		cout << "[+] Результат: " << a << " * " << c << " = " << a * c << endl;
	}
	if (b == 4) {
		if (c == 0) {
			cout << "не бро на 0 нельзя делить";
		}
		else {
			cout << "[+] Результат: " << a << " / " << c << " = " << a / c << endl;
		}
	}
	if (b == 5) {
		if (c == 0) {
			cout << "не бро на 0 нельзя делить";
		}
		else {
			cout << "[+] Результат: " << a << " % " << c << " = " << (int)a % (int)c << endl;
		}
	}
	if (b == 6) {
		cout << "[+] Результат: " << a << " ^ " << c << " = " << pow(a, c) << endl;
	}
	if (b == 7) {
		if (a < 0) {
			cout << "бро корень из отрицательного не может быть найден лол"<< endl;
		}
		else {
			cout << "[+] Результат: " << "Крн " << a << " = " << sqrt(a) << endl;
		}
	}
	if (b == 8) {
		cout << "[+] Результат: " << "Куб  " << a << " = " << a*a * a << endl;
	}
	if (b == 9) {
		cout << "[+] Результат: " << "Син  " << a << " = " << sin(a) << endl;
	}
	if (b == 10) {
		cout << "[+] Результат: " << "Кос  " << a << " = " << cos(a)<< endl;
	}
	return 0;
}

int main() {
	setlocale(0, "");
	double a; int b;  double c;


	cout << "1 складывать\n" << endl;
	cout << "2 вычитать\n" << endl;
	cout << "3 умножать	\n" << endl;
	cout << "4 делить	\n" << endl;
	cout << "5 деление от остатка 	\n" << endl;
	cout << "6 степень 	\n" << endl;
	cout << "7 корень 	\n" << endl;
	cout << "8 куб 	\n" << endl;
	cout << "9 синус 	\n" << endl;
	cout << "10 косинус 	\n" << endl;

	cout << "делить на 0 нельзя\n" << endl;
	cout << "введи\n" << endl;

	
	while (true){
		cin >> a;

		cin >> b;
		if ((b  == 7)or (b == 8)or (b == 9)or (b == 10)) {
			c = 0.0;
			Calc(a, b, c);
			b = 0.0;
		}
		else{
			cin >> c;

			Calc(a, b, c);
		}

	}
}
