#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


#define RESET   "\033[0m"
#define WHITE   "\033[97m"
#define GREEN   "\033[92m"
#define BLUE    "\033[94m"
#define RED     "\033[91m"
#define YELLOW  "\033[93m"
#define CYAN    "\033[96m"
#define BOLD    "\033[1m"

const int ROWS = 3;
const int COLS = 4;

const char* getColor(int value) {
    if (value < 10) return WHITE;
    if (value < 20) return GREEN;
    if (value < 30) return BLUE;
    if (value < 40) return RED;
    return YELLOW;
}

void printColored(int value) {
    std::cout << getColor(value) << BOLD;
    if (value < 10) std::cout << " " << value << " ";
    else            std::cout << value << " ";
    std::cout << RESET;
}

void print2D(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            printColored(arr[i][j]);
        std::cout << "\n";
    }
}

void print1D(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printColored(arr[i]);
    std::cout << "\n";
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    
    int matrix[ROWS][COLS];
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            matrix[i][j] = std::rand() % 50;

    std::cout << CYAN << BOLD << "\n[ + ] Sortirovka:\n" << RESET;
    print2D(matrix);

    std::cout << CYAN << BOLD
        << "\n[ 1 ] Po ubyvaniyu\n"
        << "[ 2 ] Po vozrastaniyu\n"
        << RESET
        << CYAN << "[ + ] Vvod: " << RESET;

    int choice;
    std::cin >> choice;

    if (choice != 1 && choice != 2) {
        std::cout << RED << "Oshibka, vvedite 1 ili 2\n" << RESET;
        return 1;
    }

    const int SIZE = ROWS * COLS;
    int flat[SIZE];
    int idx = 0;
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            flat[idx++] = matrix[i][j];

    if (choice == 2)
        std::sort(flat, flat + SIZE);
    else
        std::sort(flat, flat + SIZE, std::greater<int>());

    std::cout << CYAN << BOLD << "\n[ + ] Rezultat:\n" << RESET;
    print1D(flat, SIZE);
    std::cout << "\n";

    return 0;
}
