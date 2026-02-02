#include <iostream>
#include <Windows.h>
using namespace std;
int n;
int m;
string Player1Name = "Игрок1";
char Player1Figure = 'X';
string Color1 = "Красный";
string Color2 = "Синий";
void cS() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}
void Settings() {
	setlocale(0, "");
	cin >> n;
	cS();
	switch (n) {
	case 1:
		cout << "Введите новый ник: ";
		cin >> Player1Name;
		cS();
		break;
	case 2:
		cout << "Введите новую фигуру: ";
		cin >> Player1Figure;
		cS();
		break;
	case 3:
		cout << "\033[31m 1 | Красный \033[0m\n" << "\033[34m 2 | Синий \033[0m\n" << "\033[37m 3 | Белый \033[0m\n" << "Выберите желаемый цвет: ";
		cin >> m;
		if (m == 1) Color1 = "Красный";
		else if (m == 2) Color1 = "Синий";
		else if (m == 3) Color1 = "Белый";
		cS();
		break;
	default:
		break;
	}
}
void SettingsR() {
	setlocale(0, "");
	cout << "+  |  Настройки игрока" << endl << endl << "1  |  Ник     : " << Player1Name << endl << "2  |  Фигура  : " << Player1Figure << endl << "3  |  Цвет    : " << "\033[31m" << Color1 << "\033[0m\n" << endl << endl << ">  | Ввод: ";
	Settings();
}
void SettingsB() {
	setlocale(0, "");
}
void SettingsW() {
	setlocale(0, "");
}
void main() {
	setlocale(0, "");
	cout << "1 Начать игру" << endl << "2 Статистика" << endl << "3 Настройки" << endl << "4 Выйти" << endl << ">> ";
	cin >> n;
	cS();
	while (true) {
		switch (n) {
		case 1:

			break;
		case 2:

			break;
		case 3:
			cout << " +  |  Настройки игрока" << endl << endl << "1  |  Игрок 1" << endl << "2  |  Игрок 2" << endl << endl << ">  | Ввод: ";
			cin >> n;
			cS();
			switch (n) {
			case 1:
				while(true){
					if (Color1 == "Красный") {
						SettingsR();
					}
					else if (Color1 == "Синий") {
						SettingsB();
					}
					else if (Color1 == "Белый") {
						SettingsW();
					}
				}
				
			case 2:

			case 3:

			default:
				break;
			}

		case 4:
			break;
		d:
			cout << "Ошибка!";
			cin >> n;
			break;
		}
	}

}
