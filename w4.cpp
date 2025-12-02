#include <iostream>
using namespace std;

int main()
{

    setlocale(0, "");
    int z = 2;
    int v = 0;
    cout << "[ + ] Введите число: ";
    cin >> z;

    while (z > 1) {
        while (z != 0) {
            z = (z / 10);
            v++;

        }
    }
    cout << "[ + ] Количество цифр: " << v;
    return 0;
}
