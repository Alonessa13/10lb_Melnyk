#include <iostream>
#include <regex>
#include <windows.h>
using namespace std;
bool isValidPostalCode(const string& postalCode) {
    regex postalCodePattern("^\\d{5}$");
    return regex_match(postalCode, postalCodePattern);
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string postalCode;
    cout << "Введіть поштовий індекс: ";
    cin >> postalCode;
    if (isValidPostalCode(postalCode)) {
        cout << "Індекс валідний!" << endl;
    }
    else {
        cout << "Індекс невалідний." << endl;
    }
    return 0;
}
