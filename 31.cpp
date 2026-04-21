
#include <vector>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(0, "");
    vector <int> vectorInt;
    vector <short> vectorShort;
    vector <long> vectorLong;
    vector <float> vectorFloat;
    vector <double> vectorDouble;
    vector <char> vectorChar;
    vector <bool> vectorBool;
    vector <string> vectorString;

    for (int i = 1; i <= 10; ++i) {
        vectorInt.push_back(i * 100);
    }


    for (short i = 1; i <= 10; ++i) {
        vectorShort.push_back(i * 10);
    }

 
    for (long i = 1; i <= 10; ++i) {
        vectorLong.push_back(i * 1000L);
    }

 
    for (int i = 1; i <= 10; ++i) {
        vectorFloat.push_back(i * 0.5f);
    }


    for (int i = 1; i <= 10; ++i) {
        vectorDouble.push_back(i * 0.75);
    }


    for (char c = 'A'; c < 'A' + 10; ++c) {
        vectorChar.push_back(c);
    }


    for (int i = 0; i < 10; ++i) {
        vectorBool.push_back(i % 2 == 0); 
    }

    for (int i = 1; i <= 10; ++i) {
        vectorString.push_back(std::string("String_") + to_string(i));
    }
    std::cout << "[ + ] Вектор INT:\n";
    for (size_t i = 0; i < vectorInt.size(); ++i) {
        std::cout << "[ + ] vectorInt [ " << i << " ] | значение: " << vectorInt[i] << "\n";
    }

    std::cout << "\n[ + ] Вектор SHORT:\n";
    for (size_t i = 0; i < vectorShort.size(); ++i) {
        std::cout << "[ + ] vectorShort [ " << i << " ] | значение: " << vectorShort[i] << "\n";
    }

    std::cout << "\n[ + ] Вектор LONG:\n";
    for (size_t i = 0; i < vectorLong.size(); ++i) {
        std::cout << "[ + ] vectorLong [ " << i << " ] | значение: " << vectorLong[i] << "\n";
    }

    std::cout << "\n[ + ] Вектор FLOAT:\n";
    for (size_t i = 0; i < vectorFloat.size(); ++i) {
        std::cout << "[ + ] vectorFloat [ " << i << " ] | значение: " << vectorFloat[i] << "\n";
    }

    std::cout << "\n[ + ] Вектор DOUBLE:\n";
    for (size_t i = 0; i < vectorDouble.size(); ++i) {
        std::cout << "[ + ] vectorDouble [ " << i << " ] | значение: " << vectorDouble[i] << "\n";
    }

    std::cout << "\n[ + ] Вектор CHAR:\n";
    for (size_t i = 0; i < vectorChar.size(); ++i) {
        std::cout << "[ + ] vectorChar [ " << i << " ] | значение: " << vectorChar[i] << "\n";
    }

    std::cout << "\n[ + ] Вектор BOOL:\n";
    for (size_t i = 0; i < vectorBool.size(); ++i) {
        std::cout << "[ + ] vectorBool [ " << i << " ] | значение: " << (vectorBool[i] ? "true" : "false") << "\n";
    }

    std::cout << "\n[ + ] Вектор STRING:\n";
    for (size_t i = 0; i < vectorString.size(); ++i) {
        std::cout << "[ + ] vectorString [ " << i << " ] | значение: " << vectorString[i] << "\n";
    }

    return 0;
}
