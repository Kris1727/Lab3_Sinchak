#include <iostream>
#include <string>

using namespace std;

class Friend {
private:
    string fullName;
    string phoneNumber;
    string birthDate;

public:
    Friend() {
        fullName = "";
        phoneNumber = "";
        birthDate = "";
    }

    Friend(const string& name, const string& phone, const string& date) {
        fullName = name;
        phoneNumber = phone;
        birthDate = date;
    }

    void input() {
        cout << "Введіть прізвище та ім'я: ";
        getline(cin, fullName);

        do {
            cout << "Введіть номер телефону (мінімум 10 символів): ";
            getline(cin, phoneNumber);
            if (phoneNumber.length() < 10) {
                cout << "Помилка: номер занадто короткий!" << endl;
            }
        } while (phoneNumber.length() < 10);

        cout << "Введіть дату народження (наприклад, 15.04.2003): ";
        getline(cin, birthDate);
    }

    void output() const {
        cout << "Прізвище, ім'я: " << fullName << endl;
        cout << "Номер телефону: " << phoneNumber << endl;
        cout << "Дата народження: " << birthDate << endl;
    }
};

int main() {
    cout << "1. Об'єкт friend1 (конструктор за замовчуванням):" << endl;
    Friend friend1;
    friend1.output();

    cout << "\n2. Об'єкт friend2 (конструктор з параметрами):" << endl;
    Friend friend2("Коваленко Андрій", "+380671234567", "12.08.2002");
    friend2.output();

    cout << "\n3. Перевірка input() для friend1:" << endl;
    friend1.input();

    cout << "\nfriend1 після введення:" << endl;
    friend1.output();

    return 0;
}