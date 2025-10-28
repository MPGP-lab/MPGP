#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] Переводчик" << endl << "[1] Русские слова" << endl << "[2] Английские слова" << endl << "[3] Выйти" << endl;
	int a;
	int b;
	cout << "Выберите функцию: ";
	cin >> a;
	switch (a) {
	case 1:
		cout << "Русские слова:" << endl;
		cout << "[1] Дорога:" << endl;
		cout << "[2] Дом" << endl;
		cout << "[3] Солнце" << endl;
		cout << "[4] Луна" << endl;
		cout << "[5] Зима" << endl;
		cout << "[6] Осень" << endl;
		cout << "[7] Лето" << endl;
		cout << "[8] Весна" << endl;
		cout << "[9] Камень" << endl;
		cout << "[10] Государство" << endl;
		cout << "[11] Провинция" << endl;
		cout << "[12] Локация" << endl;
		cout << "Выберите слово: ";
		cin >> b;
		switch (b) {
		case 1:
			cout << "[1] Дорога - Road" << endl;
			return 1;
		case 2:
			cout << "[2] Дом - Home" << endl;
			return 1;
		case 3:
			cout << "[3] Солнце - Sun" << endl;
			return 1;
		case 4:
			cout << "[4] Луна - Moon" << endl;
			return 1;
		case 5:
			cout << "[5] Зима - Winter" << endl;
			return 1;
		case 6:
			cout << "[6] Осень - Autumn" << endl;
			return 1;
		case 7:
			cout << "[7] Лето - Summer" << endl;
			return 1;
		case 8:
			cout << "[8] Весна - Spring" << endl;
			return 1;
		case 9:
			cout << "[9] Камень - Stone" << endl;
			return 1;
		case 10:
			cout << "[10] Государство - State" << endl;
			return 1;
		case 11:
			cout << "[11] Провинция - Province" << endl;
			return 1;
		case 12:
			cout << "[12] Локация - Location" << endl;
			return 1;
		default:
			cout << "Неправильно Набран Номер" << endl;
			return 1;
		}
	case 2:
		cout << "Propa Enlish Wods :" << endl;
		cout << "[1] Road:" << endl;
		cout << "[2] Home" << endl;
		cout << "[3] Sun" << endl;
		cout << "[4] Moon" << endl;
		cout << "[5] Winter" << endl;
		cout << "[6] Autumn" << endl;
		cout << "[7] Summer" << endl;
		cout << "[8] Spring" << endl;
		cout << "[9] Stone" << endl;
		cout << "[10] State" << endl;
		cout << "[11] Province" << endl;
		cout << "[12] Location" << endl;
		cout << "Choose thine word my fellow englishman: ";

		cin >> b;
		
		switch (b) {
		case 1:
			cout << "[1] Road - Дорога" << endl;
			return 1;
		case 2:
			cout << "[2] Home - Дом" << endl;
			return 1;
		case 3:
			cout << "[3] Sun - Солнце" << endl;
			return 1;
		case 4:
			cout << "[4] Moon - Луна" << endl;
			return 1;
		case 5:
			cout << "[5] Winter - Зима" << endl;
			return 1;
		case 6:
			cout << "[6] Autumn - Осень" << endl;
			return 1;
		case 7:
			cout << "[7] Summer - Лето" << endl;
			return 1;
		case 8:
			cout << "[8] Spring - Весна" << endl;
			return 1;
		case 9:
			cout << "[9] Stone - Камень" << endl;
			return 1;
		case 10:
			cout << "[10] State - Государство" << endl;
			return 1;
		case 11:
			cout << "[11] Province - Провинция" << endl;
			return 1;
		case 12:
			cout << "[12] Location - Локация" << endl;
			return 1;
		default:
			cout << "Thine chooseth numba deems quite bloddy wrong to mine ears" << endl;
			return 1;
		}
	case 3:
		cout << "ПОКА ПОКА :)";
		break;
	default:
		cout << "не верно.";
		return 1;
	}




}
