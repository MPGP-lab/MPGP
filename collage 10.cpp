#include <iostream>
using namespace std;
#include <random>
int main() {
	setlocale(0, "");
	int a = 0;
	int b = 5;
	int c;
	int d = 0;
	int e;
	int n;
	cout << "1. Начать игру" << endl << "2. Выйти" << endl;
	cin >> n;
	if (n == 1) {
		while (d != 3 and b > 0) {
			cout << "Угаданных чисел: " << n << " / 3" << endl << "Попыток: " << b << endl << "Угадать число: ";
			cin >> c;
			int e = rand() % 10 + 1;
			if (c == e) {
				cout << "Вы угадали число!" << endl;
				a += 1;
				d += 1;
			}
			else {
				cout << "Неверное число!" << endl << "Ответ был:" << e << endl;
				b -= 1; 

			}
		}

	}
	else {
		cout << "Ошибка";
	}




	return(0);
}
