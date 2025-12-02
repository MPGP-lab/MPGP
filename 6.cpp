#include <iostream>
using namespace std;

int main()
{

    setlocale(0, "");
    int z = 1;
    int v = 0;
    int o = 0;

    while (z != 0) {
        cout << "[ + ] Введите число: ";

        cin >> z;
        if (z != 0) {
            o++;
            v += z;
        }

    }
    cout << "[ + ] Среднее арифметическое " << (v / o) << endl;
    return 0;
}
