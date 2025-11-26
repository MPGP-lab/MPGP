#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int choice, type, size;
    char symbol;

    cout << "[ - ] Программа \"Геометрические фигуры\"\n\n";
    cout << "[ 1 ] Линия\n";
    cout << "[ 2 ] Квадрат\n";
    cout << "[ 3 ] Прямоугольник\n";
    cout << "[ 4 ] Треугольник\n\n";
    cout << "[ - ] Выберите фигуру: ";
    cin >> choice;

    cout << "\n\n";

    if (choice == 4) {
        cout << "[ - ] Фигура: \"Треугольник\"\n\n";
        cout << "[ 1 ] Заполненный\n";
        cout << "[ 2 ] Пустой\n\n";
        cout << "[ - ] Выберите тип: ";
        cin >> type;

        cout << "\nДалее программа запрашивает высоту и текстуру(символ):\n\n";
        cout << "[ - ] Размер: ";
        cin >> size;
        cout << "[ - ] Текстура: ";
        cin >> symbol;

        cout << "\nПрограмма выводит результат относительно введенных пользователем данных:\n\n";
        cout << "[ - ] Результат:\n\n";

        if (type == 1) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size - i - 1; j++) {
                    cout << ". ";
                }
                for (int j = 0; j < 2 * i + 1; j++) {
                    cout << symbol << " ";
                }
                cout << "\n";
            }
        }
        else {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size - i - 1; j++) {
                    cout << ". ";
                }
                for (int j = 0; j < 2 * i + 1; j++) {
                    if (j == 0 || j == 2 * i || i == size - 1) {
                        cout << symbol << " ";
                    }
                    else {
                        cout << ". ";
                    }
                }
                cout << "\n";
            }
        }
    }
    else if (choice == 1) {
        cout << "[ - ] Фигура: \"Линия\"\n\n";
        cout << "[ - ] Размер: ";
        cin >> size;
        cout << "[ - ] Текстура: ";
        cin >> symbol;

        cout << "\nПрограмма выводит результат:\n\n";
        cout << "[ - ] Результат:\n\n";

        for (int i = 0; i < size; i++) {
            cout << symbol << " ";
        }
        cout << "\n";
    }
    else if (choice == 2) {
        cout << "[ - ] Фигура: \"Квадрат\"\n\n";
        cout << "[ 1 ] Заполненный\n";
        cout << "[ 2 ] Пустой\n\n";
        cout << "[ - ] Выберите тип: ";
        cin >> type;

        cout << "\n[ - ] Размер: ";
        cin >> size;
        cout << "[ - ] Текстура: ";
        cin >> symbol;

        cout << "\nПрограмма выводит результат:\n\n";
        cout << "[ - ] Результат:\n\n";

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (type == 1 || i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                    cout << symbol << " ";
                }
                else {
                    cout << ". ";
                }
            }
            cout << "\n";
        }
    }
    else if (choice == 3) {
        int width, height;
        cout << "[ - ] Фигура: \"Прямоугольник\"\n\n";
        cout << "[ 1 ] Заполненный\n";
        cout << "[ 2 ] Пустой\n\n";
        cout << "[ - ] Выберите тип: ";
        cin >> type;

        cout << "\n[ - ] Высота: ";
        cin >> height;
        cout << "[ - ] Ширина: ";
        cin >> width;
        cout << "[ - ] Текстура: ";
        cin >> symbol;

        cout << "\nПрограмма выводит результат:\n\n";
        cout << "[ - ] Результат:\n\n";

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (type == 1 || i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    cout << symbol << " ";
                }
                else {
                    cout << ". ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
