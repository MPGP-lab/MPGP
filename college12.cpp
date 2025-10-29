#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int n = 1;
	int h = 3;
	int p = 0;
	int b;
	char Variant;
	string o;
	string j = "user";
	while (n != 2){
		cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
		cout << "1. Начать игру" << endl << "2. Настройки" << endl << "3. Правила" << endl << "4. Выйти" << endl;
		cin >> n;
		 
		system("cls");

		switch (n) {
		case 1: {
			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[1] Вопрос: Системный язык программирования ?" << endl;
			cout << "[A] Python" <<  "  [B] С#" << endl;
			cout << "[C] Ruby" << "    [D] C++" << endl;
			cin >> Variant;
			if (Variant == 'D')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");
			
			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			if (p == 8)
			{
				p = 0;
				cout << "Вы победили" << endl;
				break;
			}
			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");

			cout << "[+] Игрок: " << j << "|Жизни:" << h << "|Очки:" << p << endl;
			cout << "[2] Вопрос: Когда была прината конституция Украины ?" << endl;
			cout << "[A] 1991" << "  [B] 1996" << endl;
			cout << "[C] 1993" << "    [D] 2000" << endl;
			cin >> Variant;
			if (Variant == 'B')
			{
				p = p + 1;
			}
			else
			{
				h = h - 1;
			}
			system("cls");
			break;
				}
		case 2: {
			cout << "Изменить имя: " << j << endl;
			cin >> j;
			system("cls");
			break;
			
		}
		case 3: {
			cout << "Игрок получает очки за правильный ответ на вопрос;" << endl;
			cout << "Игрок проходит дальше за правильный ответ;" << endl;
			cout << "Игрок теряет жизнь при неправильном ответе." << endl;
			cout << "1. Выйти в главное меню" << endl;
			cin >> b;
			if (b == 1) {
				system("cls");
				break;
			}
		}
		case 4: {
			system("cls");
			return 0;
		}
	}



	}
}
