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
    int win = 0;
    int loose = 0;
    int kvo = 0;
    float ochki = 0;
};

Player player1 = { "Игрок1",    'X', "Красный" };
Player player2 = { "Игрок2",    'O', "Синий" };
Player computer = { "Компьютер", '#', "Зелёный" };

Static player1S, player2S, computerS;

char board[9];

void initBoard() {
    for (int i = 0; i < 9; i++) board[i] = '1' + i;
}

bool cellFree(int i) { return board[i] >= '1' && board[i] <= '9'; }

bool isFull() {
    for (int i = 0; i < 9; i++)
        if (cellFree(i)) return false;
    return true;
}

char checkWinner() {
    int lines[8][3] = {
        {0,1,2},{3,4,5},{6,7,8},
        {0,3,6},{1,4,7},{2,5,8},
        {0,4,8},{2,4,6}
    };
    for (int i = 0; i < 8; i++)
        if (board[lines[i][0]] == board[lines[i][1]] &&
            board[lines[i][1]] == board[lines[i][2]])
            return board[lines[i][0]];
    return ' ';
}

int aiMove(char aiFig, char humanFig) {
    for (int i = 0; i < 9; i++) {
        if (!cellFree(i)) continue;
        char save = board[i]; board[i] = aiFig;
        if (checkWinner() == aiFig) { board[i] = save; return i; }
        board[i] = save;
    }
    for (int i = 0; i < 9; i++) {
        if (!cellFree(i)) continue;
        char save = board[i]; board[i] = humanFig;
        if (checkWinner() == humanFig) { board[i] = save; return i; }
        board[i] = save;
    }
    if (cellFree(4)) return 4;
    int corners[4] = { 0, 2, 6, 8 };
    for (int i = 0; i < 4; i++)
        if (cellFree(corners[i])) return corners[i];
    for (int i = 0; i < 9; i++)
        if (cellFree(i)) return i;
    return -1;
}

void cS() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

string ColorCode(const string& color) {
    if (color == "Красный")  return "\033[31m";
    if (color == "Синий")    return "\033[34m";
    if (color == "Зелёный")  return "\033[32m";
    if (color == "Белый")    return "\033[37m";
    return "\033[37m";
}

void printBoard(Player& p1, Player& p2) {
    cout << "\n";
    for (int i = 0; i < 9; i++) {
        char c = board[i];
        string col = "\033[37m";
        if (c == p1.figure) col = ColorCode(p1.color);
        else if (c == p2.figure) col = ColorCode(p2.color);

        cout << "| " << col << c << "\033[0m ";
        if ((i + 1) % 3 == 0)
            cout << "|\n" << (i < 6 ? "+-----------+\n" : "");
    }
    cout << "\n";
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
            << "\033[32m3 | Зелёный\033[0m\n"
            << "\033[37m4 | Белый\033[0m\n> ";
        cin >> m;
        cS();
        if (m == 1) p.color = "Красный";
        else if (m == 2) p.color = "Синий";
        else if (m == 3) p.color = "Зелёный";
        else if (m == 4) p.color = "Белый";
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

void SettingsMenuNoNick(Player& p) {
    cout << "+  |  Настройки компьютера\n\n"
        << "1  |  Фигура  : " << p.figure << "\n"
        << "2  |  Цвет    : "
        << ColorCode(p.color) << p.color << "\033[0m\n\n"
        << ">  | Ввод: ";
    cin >> n;
    cS();
    switch (n) {
    case 1:
        cout << "Введите новую фигуру: ";
        cin >> p.figure;
        break;
    case 2:
        cout << "\033[31m1 | Красный\033[0m\n"
            << "\033[34m2 | Синий\033[0m\n"
            << "\033[32m3 | Зелёный\033[0m\n"
            << "\033[37m4 | Белый\033[0m\n> ";
        cin >> m;
        cS();
        if (m == 1) p.color = "Красный";
        else if (m == 2) p.color = "Синий";
        else if (m == 3) p.color = "Зелёный";
        else if (m == 4) p.color = "Белый";
        break;
    default:
        Setting = false;
        break;
    }
}

void playGame(bool single) {
    initBoard();

    Player& p1 = player1;
    Player& p2 = single ? computer : player2;
    Static& s1 = player1S;
    Static& s2 = single ? computerS : player2S;

    bool turn = true;
    char winner = ' ';

    while (true) {
        cS();
        cout << (single ? "=== ОДИНОЧНАЯ ИГРА ===" : "=== ДВА ИГРОКА ===") << "\n\n";

        Player& cur = turn ? p1 : p2;
        cout << "Ход: " << ColorCode(cur.color) << cur.name
            << " [" << cur.figure << "]\033[0m\n";

        printBoard(p1, p2);

        if (single && !turn) {
            int pos = aiMove(computer.figure, p1.figure);
            board[pos] = computer.figure;
        }
        else {
            cout << "Введите номер ячейки (1-9): ";
            int cell;
            cin >> cell;
            cell--;
            if (cell < 0 || cell > 8 || !cellFree(cell)) {
                cout << "\033[31mНеверный ход! Попробуйте снова.\033[0m\n";
                continue;
            }
            board[cell] = cur.figure;
        }

        winner = checkWinner();
        if (winner != ' ' || isFull()) break;
        turn = !turn;
    }

    cS();
    cout << "=== РЕЗУЛЬТАТ ===\n";
    printBoard(p1, p2);

    if (winner != ' ') {
        bool p1won = (winner == p1.figure);
        Static& ws = p1won ? s1 : s2;
        Static& ls = p1won ? s2 : s1;
        Player& won = p1won ? p1 : p2;

        cout << ColorCode(won.color) << won.name << " ПОБЕДИЛ!\033[0m\n\n";
        ws.win++;   ws.ochki += 5.0f;
        ls.loose++; ls.ochki -= 6.0f;
    }
    else {
        cout << "НИЧЬЯ!\n\n";
        s1.kvo++; s1.ochki -= 1.2f;
        s2.kvo++; s2.ochki -= 1.2f;
    }

    system("pause");
    cS();
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
            cout << "1  |  Одиночная (vs Компьютер)\n"
                << "2  |  Два игрока\n"
                << "0  |  Назад\n\n>> ";
            cin >> m;
            cS();
            if (m == 1) playGame(true);
            else if (m == 2) playGame(false);
            break;

        case 2:
            cout << "+  |  Статистика \n\n";
            cout << "                      W     L     D     |     Очки \n";
            cout << "1  |  " << player1.name << "\t\t" << player1S.win << "     " << player1S.loose << "     " << player1S.kvo << "     |     " << player1S.ochki << "\n";
            cout << "2  |  " << player2.name << "\t\t" << player2S.win << "     " << player2S.loose << "     " << player2S.kvo << "     |     " << player2S.ochki << "\n";
            cout << "3  |  " << computer.name << "\t" << computerS.win << "     " << computerS.loose << "     " << computerS.kvo << "     |     " << computerS.ochki << "\n";
            cout << "\n0  |  Назад \n\n";
            cout << ">  |  Ввод: ";
            cin >> abc;
            cS();
            break;

        case 3:
            cout << "+  |  Настройки\n\n"
                << "1  |  Игрок 1\n"
                << "2  |  Игрок 2\n"
                << "3  |  Компьютер\n\n> ";
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
            else if (n == 3) {
                Setting = true;
                while (Setting)
                    SettingsMenuNoNick(computer);
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
