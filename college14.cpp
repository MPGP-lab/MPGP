#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[1] Линия " << endl << "[2] Квадрат" << endl;
	int n;
	int b;
	int a;
	char v;
	int c;
	int t = 0;
	int h = 0;
	int m = 1;
	int u = 0;
	int p = 0;
	int j = 0;
	int P = 0;
	int N = 0;
	cout << "Выберите фигуру: ";
	cin >> n;
	switch (n) {
	case 1: {
		cout << "[1] Горизонтальная: " << endl << "[2] Вертикальная: " << endl;
		cin >> b;
		switch (b) {
		case 1: {
			cout << "Длина линии: ";
			cin >> v;
			cout << "Текстура линии: ";
			cin >> c;
			for (t; v; t++) {
				cout << c << " ";
				h += 1;
				if (h == v) {
					break;
				}
			}
		}
		case 2: {
			cout << "Длина линии: ";
			cin >> v;
			cout << "Текстура линии: ";
			cin >> c;
			for (t; v; t++) {
				cout << c << endl;
				h += 1;
				if (h == v) {
					break;
				}
			}
		}
		}
	}
	case 2: {
		cout << "[1] Заполненный " << endl << "[2] Пустой" << endl << "Выберите тип: ";
		cin >> b;

		switch (b) {
		case 1: {
			cout << "Размер: ";
			cin >> a;
			cout << "Текстура: ";
			cin >> v;
			for (c = 0; a; c++) {
				cout << v << " ";
				if (c == a - 1) {
					t += 1;
					if (t == a) {
						break;
					}
					cout << endl << v << " ";
					c = 0;

				}
			}
		}
		case 2: {
			cout << "Размер: ";
			cin >> a;
			cout << "Текстура: ";
			cin >> v;
			for (c = 0; a; c++) {
				if (N == 1) {
					break;
				}
				if (t <= 0) {
					cout << v << " ";
				}
				if (c == a - 1) {
					t += 1;
					if (t == a) {
						break;
					}
					cout << endl << v;

					while (u != a - 1) {
						
						if (m != a) {
							m += 1;
						}

						if (m == a - 1) {
							cout << " +";
							m = 0;
							u += 1;
							if (u == a - 2) {
								cout << " " << v;
								m += 1;
								j += 1;
								if (j == a - 2) {
									cout << endl;
									while (P != a-1) {
										
										cout << v << " ";
										p += 1;
										if (p == a) {
											c = a;
											u = a - 1;
											n = 1;
											j = 0;
											m += 1;
											break;
										}
										c = a;
										u = a - 1;
										N = 1;
										j = 0;
										m += 1;
										
									}
									

								}
								break;
							}
							
						}
						
						
					}
					u = 0;

				}


			}
		}
		}
	}
	}
}
