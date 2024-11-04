#include <iostream>
using namespace std;

int main() {
    double x;  // Вхідний аргумент
    double a;  // Вхідний параметр
    double b;  // Вхідний параметр
    double c;  // Вхідний параметр
    double F;  // Результат обчислення функції

    // Введення значень параметрів
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // Розгалуження за умовами (повна форма)
    if (x + c < 0) {
        if (a != 0) {
            F = -a * x * x - b;
        }
        else {
            F = (x / c) + (c / x);  // Якщо a == 0
        }
    }
    else if (x + c > 0 && a == 0) {
        F = (x - a) / (x - c);
    }
    else {
        F = (x / c) + (c / x);
    }

    // Виведення результату
    cout << "F = " << F << endl;

    // Скорочена форма розгалуження
    if (x + c < 0 && a != 0) {
        F = -a * x * x - b;
    }
    else if (x + c > 0 && a == 0) {
        F = (x - a) / (x - c);
    }
    else {
        F = (x / c) + (c / x);
    }

    return 0;
}
