#include <iostream>
using namespace std;

int main() {
    double x;
    double a;
    double b;
    double c;
    double F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // Повна
    if (x + c < 0) {
        if (a != 0) {
            F = -a * x * x - b;
        }
        else {
            F = (x / c) + (c / x);
        }
    }
    else if (x + c > 0 && a == 0) {
        F = (x - a) / (x - c);
    }
    else {
        F = (x / c) + (c / x);
    }

    cout << "F = " << F << endl;

    // Скорочена
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
