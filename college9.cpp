#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;
    setlocale(0, "");
    cout << "[+] Цикл 'WHILE'" << endl;



    while (a != 0) {
        cout << "[+] Введите число: ";
        cin >> a;
        if ((a > 0) and (a <= 15)) {
            while (b != a) {
                b += 1;
                cout << "[+] Цикл отработал. Круг: " << b << endl;

            }
            if (b == a) {
                b = 0;
                a = 1;
            
            }

        }
        else {
            cout << "Ошибка" << endl;
            b = 0;
        }
    }

}
