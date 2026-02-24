#include <iostream>
#include <Windows.h>
using namespace std;

int n, m, abc;
bool Setting = true;

struct Player {
    string name;
    char figure;
    string color;
};
struct Static {
    int win;
    int loose;
    int kvo;
    int ochki;
};
Player player1 = { "Игрок1", 'X', "Красный" };
Player player2 = { "Игрок2", 'O', "Синий" };

Static player1S = { 0, 0, 0};
Static player2S = { 0, 0, 0 };

void cS() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

string ColorCode(const string& color) {
    if (color == "Красный") return "\033[31m";
    if (color == "Синий")  return "\033[34m";
    return "\033[37m";
}

void Settings(Player& p) {
    cin >> n;
    cS();

    switch (n) {
    case 1:
        cout << "Введите новый ник: ";
        cin >> p.name;
        break;

    case 2:
        cout << "Введите новую фигуру: ";
        cin >> p.figure;
        break;

    case 3:
        cout << "\033[31m1 | Красный\033[0m\n"
            << "\033[34m2 | Синий\033[0m\n"
            << "\033[37m3 | Белый\033[0m\n> ";
        cin >> m;
        cS();
        if (m == 1) p.color = "Красный";
        else if (m == 2) p.color = "Синий";
        else if (m == 3) p.color = "Белый";
        break;
    default:
        Setting = false;
        break;
    }
}

void SettingsMenu(Player& p) {
    cout << "+  |  Настройки игрока\n\n"
        << "1  |  Ник     : " << p.name << "\n"
        << "2  |  Фигура  : " << p.figure << "\n"
        << "3  |  Цвет    : "
        << ColorCode(p.color) << p.color << "\033[0m\n\n"
        << ">  | Ввод: ";

    Settings(p);
}

int main() {
    setlocale(0, "");

    while (true) {
        cout << "1 Начать игру\n"
            << "2 Статистика\n"
            << "3 Настройки\n"
            << "4 Выйти\n>> ";
        cin >> n;
        cS();

        switch (n) {
        case 1:
            cout << "Игра пока не реализована\n";
            system("pause");
            cS();
            break;

        case 2:
            cout << "+  |  Статистика \n\n";
            cout << "                      W     L     D     |     Очки \n";
            cout << "1  |  " << player1.name << "          " << player1S.win << "     " << player1S.loose << "     " << player1S.kvo << "     |     " << (player1S.win * 6) * (player1S.loose * 5) * (1,2 * player1S.kvo) << "\n";
            cout << "2  |  " << player2.name << "          " << player2S.win << "     " << player2S.loose << "     " << player2S.kvo << "     |     " << (player2S.win * 6) * (player2S.loose * 5) * (1,2 * player2S.kvo) << "\n";
            
            cout << "0  |  Назад \n\n";
            cout << ">  |  Ввод: ";
            
            cin >> abc;

            system("pause");
            cS();
            break;
        case 3:
            cout <<"+  |  Настройки\n\n"
                << "1  |  Игрок 1\n"
                << "2  |  Игрок 2\n\n> ";
            cin >> n;
            cS();

            if (n == 1) {
                Setting = true;
                while (Setting)
                    SettingsMenu(player1);
            }
            else if (n == 2) {
                Setting = true;
                while (Setting)
                    SettingsMenu(player2);
            }
            cS();
            break;

        case 4:
            return 0;

        default:
            cout << "Ошибка ввода!\n";
            system("pause");
            cS();
            break;
        }
    }
}
