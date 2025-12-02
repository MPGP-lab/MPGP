#include <iostream>
using namespace std;

void main()
{

    setlocale(0, "");
    int z;
    cout << "[ + ] Введите число: ";

    cin >> z;
    while (z != 0) {

        cout << "Отсчет:  " << z << endl;
        z--;
    }
    cout << "[ + ] Старт!";
  

}
