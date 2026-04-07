#include <iostream>;

using namespace std;

int console(string words, string color, int a) {
	if (a == 1) {
		if (color == "red") {
			cout << "\033[31m\033[4m" << words;
		}
		else if (color == "green") {
			cout << "\033[32m\033[4m" << words;
		}
		else if (color == "blue") {
			cout << "\033[34m\033[4m" << words ;
		}
		else if (color == "yellow") {
			cout << "\033[33m\033[4m" << words;
		}
	}
	else {
		if (color == "red") {
			cout << "\033[31m" << words;
		}
		else if (color == "green") {
			cout << "\033[32m" << words;
		}
		else if (color == "blue") {
			cout << "\033[34m" << words;
		}
		else if (color == "yellow") {
			cout << "\033[33m" << words;
		}
	}
	return 0;
}


int main() {
	setlocale(0, "");
	console("asdsa", "red", 0);
	return 0;
}
