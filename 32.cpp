#include <iostream>
#include <vector>
#include <string>

using namespace std;

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void displayStudents(const vector<string>& students, const string& groupName) {
    cout << "\n[ # ] Группа " << groupName << "\n\n";
    if (students.empty()) {
        cout << "  Список студентов пуст\n";
    }
    else {
        for (size_t i = 0; i < students.size(); i++) {
            cout << "  [" << (i + 1) << "] " << students[i] << endl;
        }
    }
    cout << "\n[ 1 ] Изменить ФИ студента\n";
    cout << "[ 2 ] Добавить студента\n";
    cout << "[ 3 ] Удалить студента\n";
    cout << "[ 0 ] К группам (возврат в меню)\n";
    cout << "\nВыберите действие: ";
}

void editStudent(vector<string>& students, const string& groupName) {
    if (students.empty()) {
        cout << "\nОшибка: В группе нет студентов для изменения!\n";
        cout << "Нажмите Enter для продолжения...";
        cin.ignore();
        cin.get();
        return;
    }

    clearConsole();
    cout << "[ Изменение ФИ студента ]\n";
    cout << "Группа: " << groupName << "\n\n";

    for (size_t i = 0; i < students.size(); i++) {
        cout << "  [" << (i + 1) << "] " << students[i] << endl;
    }

    int studentNum;
    cout << "\nВведите номер студента для изменения (1-" << students.size() << "): ";
    cin >> studentNum;

    if (cin.fail() || studentNum < 1 || studentNum > static_cast<int>(students.size())) {
        cin.clear();
        cin.ignore();
        cout << "\nОшибка: Неверный номер студента!\n";
        cout << "Нажмите Enter для продолжения...";
        cin.ignore();
        cin.get();
        return;
    }

    cin.ignore();

    string newName;
    cout << "Введите новое ФИ студента: ";
    getline(cin, newName);

    students[studentNum - 1] = newName;

    clearConsole();
    cout << "✓ Успешно! ФИ студента изменено.\n";
    displayStudents(students, groupName);

    cout << "\nНажмите Enter для продолжения...";
    cin.get();
}

void addStudent(vector<string>& students, const string& groupName) {
    clearConsole();
    cout << "[ Добавление студента ]\n";
    cout << "Группа: " << groupName << "\n\n";

    cin.ignore();

    string newName;
    cout << "Введите ФИ нового студента: ";
    getline(cin, newName);

    students.push_back(newName);

    clearConsole();
    cout << "✓ Успешно! Студент добавлен в группу.\n";
    displayStudents(students, groupName);

    cout << "\nНажмите Enter для продолжения...";
    cin.get();
}
void deleteStudent(vector<string>& students, const string& groupName) {
    if (students.empty()) {
        cout << "\nОшибка: В группе нет студентов для удаления!\n";
        cout << "Нажмите Enter для продолжения...";
        cin.ignore();
        cin.get();
        return;
    }

    clearConsole();
    cout << "[ Удаление студента ]\n";
    cout << "Группа: " << groupName << "\n\n";

 
    for (size_t i = 0; i < students.size(); i++) {
        cout << "  [" << (i + 1) << "] " << students[i] << endl;
    }

    cout << "\nБудет удален последний студент в списке: \"" << students.back() << "\"\n";
    cout << "Вы уверены? (1 - Да / 0 - Нет): ";

    int confirm;
    cin >> confirm;

    if (confirm == 1) {
        string deletedStudent = students.back();
        students.pop_back();

        clearConsole();
        cout << "✓ Успешно! Студент \"" << deletedStudent << "\" удалён из группы.\n";
        displayStudents(students, groupName);
    }
    else {
        clearConsole();
        cout << "Удаление отменено.\n";
        displayStudents(students, groupName);
    }

    cout << "\nНажмите Enter для продолжения...";
    cin.ignore();
    cin.get();
}


void manageGroup(vector<string>& students, const string& groupName) {
    int choice;
    do {
        clearConsole();
        displayStudents(students, groupName);
        cin >> choice;

        switch (choice) {
        case 1:
            editStudent(students, groupName);
            break;
        case 2:
            addStudent(students, groupName);
            break;
        case 3:
            deleteStudent(students, groupName);
            break;
        case 0:
            return;
        default:
            cout << "\nОшибка: Неверный выбор! Попробуйте снова.\n";
            cout << "Нажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }
    } while (choice != 0);
}


void initializeGroups(vector<vector<string>>& groups) {

    groups[0] = {
        "Абрамова София",
        "Александрова Марьям",
        "Алексеева Варвара",
        "Анисимов Платон"
    };

    
    groups[1] = {
        "Балашова София",
        "Виноградов Матвей",
        "Гусев Максим",
        "Зотов Владислав"
    };

   
    groups[2] = {


        "Калмыков Максим",
        "Ковалев Андрей",
        "Кочергин Ярослав",
        "Куликов Адам"
    };

   
    groups[3] = {
        "Леонтьева Вероника",
        "Никитин Матвей",
        "Носков Роман",
        "Смирнова Полина",
        "Терентьева Полина",
        "Тимофеев Давид",
        "Федорова Полина",
        "Фролов Данила"
    };
}

int main() {
    vector<vector<string>> groups(4);
    string groupNames[4] = { "1ИСП9-4", "2ИСП9-3", "3ИСП9-2", "4ИСП9-1" };

    initializeGroups(groups);

    int choice;
    do {
        clearConsole();
        cout << "[ # ] База данных студентов колледжа\n\n";
        cout << "[ 1 ] 1ИСП9-4\n";
        cout << "[ 2 ] 2ИСП9-3\n";
        cout << "[ 3 ] 3ИСП9-2\n";
        cout << "[ 4 ] 4ИСП9-1\n";
        cout << "[ 0 ] Выход\n";
        cout << "\nВыберите группу: ";

        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            manageGroup(groups[choice - 1], groupNames[choice - 1]);
        }
        else if (choice != 0) {
            cout << "\nОшибка: Неверный выбор! Попробуйте снова.\n";
            cout << "Нажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 0);

    cout << "\nПрограмма завершена. До свидания!\n";
    return 0;
}
