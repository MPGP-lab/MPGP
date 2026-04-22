#include <iostream>
using namespace std;

class Game{
private:
	string name;
	string genre;
	int year;
	float rate;

public:
	Game(string n, string g, int y, float r) {
		name = n;
		genre = g;
		year = y;
		rate = r;
	}
	void SN(){
		cout << "Имя: " << name << endl;
	}
	void SG() {
		cout << "Жанр: " << genre << endl;
	}
	void SY() {
		cout << "Год Выпуска: " << year << endl;
	}
	void SR() {
		cout << "Оценка: " << rate << endl;
	}

};
int main(){
	Game game1("Майнкрафт" ,"Выживание, Песочница" , 2009 , 9.8);
	Game game2("Тохо Проджект", "Буллет-Хелл", 1995, 9.9);
	Game game3("Дота 2", "Моба", 2013, 1.4);
	Game game4("Европа Универсалис 5", "Гранд-Стратегия", 2025, 10.5);
	setlocale(0, "");
	cout << "[-] Программа \"Классы и объекты\"" << endl;
	cout << "[ 1 ] game1:" << endl;
	game1.SN();
	game1.SG();
	game1.SY();
	game1.SR();
	cout << "[ 2 ] game2:" << endl;
	game2.SN();
	game2.SG();
	game2.SY();
	game2.SR();
	cout << "[ 3 ] game3:" << endl;
	game3.SN();
	game3.SG();
	game3.SY();
	game3.SR();
	cout << "[ 4 ] game4:" << endl;
	game4.SN();
	game4.SG();
	game4.SY();
	game4.SR();
	return 0;
};
