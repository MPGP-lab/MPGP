#include <iostream>
#include <Windows.h>  
using namespace std;
void clearScreen() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}
enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};
void SetColor(ConsoleColor text, ConsoleColor background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void main() {
	ConsoleColor textColor;
	ConsoleColor bgColor;
	textColor = White;  
	bgColor = Black;      
	SetColor(textColor, bgColor);
	setlocale(0, "");
	int n;
	string Player1Name = "Игрок 1";
	char Player1Figure = 'X' ;
	cout << "1 Начать игру" << endl << "2 Статистика" << endl << "3 Настройки" << endl << "4 Выйти" << endl << ">> ";
	cin >> n;
	clearScreen();
	while (true) {
		switch (n) {
		case 1:

			break;
		case 2:

			break;
		case 3:
			cout << " +  |  Настройки игрока" << endl << endl << "1  |  Игрок 1" << endl << "2  |  Игрок 2" << endl << endl << " >  | Ввод: ";
			cin >> n;
			switch (n) {
			case 1:
				cout << " +  |  Настройки игрока" << endl << endl << "1  |  Ник     : " << Player1Name << endl << "2  |  Фигура   : " << Player1Figure << endl << "3  |  Цвет    : ";
				SetColor(Black, Blue);
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
