#include <iostream>
#include <vector>

using namespace std;

void drawSquare(vector<vector<char>>& field, int x, int y, int size, char symbol)
{
    if (size < 2)
        return;

    // Верх и низ
    for (int i = 0; i < size; i++)
    {
        field[y][x + i] = symbol;
        field[y + size - 1][x + i] = symbol;
    }

    // Левая и правая стороны
    for (int i = 0; i < size; i++)
    {
        field[y + i][x] = symbol;
        field[y + i][x + size - 1] = symbol;
    }

    // Рекурсивный вызов (внутренний квадрат)
    drawSquare(field, x + 2, y + 2, size - 4, symbol);
}

int main()
{
    setlocale(0, "");
    int n;
    char symbol;

    cout << "Введите размер квадрата: ";
    cin >> n;

    cout << "Введите символ: ";
    cin >> symbol;

    if (n < 1)
    {
        cout << "Размер должен быть больше 0";
        return 0;
    }

    vector<vector<char>> field(n, vector<char>(n, ' '));

    drawSquare(field, 0, 0, n, symbol);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << field[i][j];
        cout << endl;
    }

    return 0;
}
