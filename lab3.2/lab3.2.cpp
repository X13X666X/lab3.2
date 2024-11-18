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
    if (x + c < 0 && a != 0) {
         F = -a * x * x - b;
        
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
    if (x + c > 0 && a == 0) {
        F = (x - a) / (x - c);
    }
    if (!((x + c < 0 && a != 0) && (x + c > 0 && a == 0))) {
        F = (x / c) + (c / x);
    }

    cout << "F = " << F << endl;

    return 0;
}
