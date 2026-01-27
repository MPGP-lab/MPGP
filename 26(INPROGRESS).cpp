#include <iostream>
#include <Windows.h>  
using namespace std;
void cS() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}
void main() {
	setlocale(0, "");
	int n;
	string Player1Name = "Игрок 1";
	char Player1Figure = 'X';
	string Color = "Синий";
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
				cout << "+  |  Настройки игрока" << endl << endl << "1  |  Ник     : " << Player1Name << endl << "2  |  Фигура  : " << Player1Figure << endl << "3  |  Цвет    : " << Color << endl << endl << ">  | Ввод: ";
				cin >> Color;
				cS();
				switch (n) {
				case 1:

				}
			case 2:

			case 3:

			default:
				break;
			}

		case 4:
			break;
		default:
			cout << "Ошибка!";
			cin >> n;
			break;
		}
	}

}
